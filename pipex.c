/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:20:25 by pvolikov          #+#    #+#             */
/*   Updated: 2025/12/02 18:34:30 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

static void	child_process_1(int pipe_fd[2], char *file1,
	char *cmd, char **envp)
{
	int		infile;

	infile = open(file1, O_RDONLY);
	if (infile < 0)
		error_exit("infile");
	dup2(infile, STDIN_FILENO);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[0]);
	close(infile);
	execute_command(cmd, envp);
}

static void	child_process_2(int pipe_fd[2], char *file2,
	char *cmd, char **envp)
{
	int		outfile;

	outfile = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (outfile < 0)
		error_exit("outfile");
	dup2(pipe_fd[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(pipe_fd[1]);
	close(outfile);
	execute_command(cmd, envp);
}

int	pipex(t_pipexargs pa, char **envp)
{
	pid_t	pid1;
	pid_t	pid2;
	int		pipe_fd[2];
	int		status;

	if (pipe(pipe_fd) == -1)
		error_exit("pipe");
	pid1 = fork();
	if (pid1 < 0)
		error_exit("fork");
	if (pid1 == 0)
		child_process_1(pipe_fd, pa.file1, pa.cmd1, envp);
	pid2 = fork();
	if (pid2 < 0)
		error_exit("fork");
	if (pid2 == 0)
		child_process_2(pipe_fd, pa.file2, pa.cmd2, envp);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, &status, 0);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	return (111);
}

int	main(int argc, char **argv, char **envp)
{
	t_pipexargs	pa;

	if (argc != 5)
	{
		write(2, "Usage: ./pipex file1 cmd1 cmd2 file2\n", 37);
		return (1);
	}
	pa.file1 = argv[1];
	pa.cmd1 = argv[2];
	pa.cmd2 = argv[3];
	pa.file2 = argv[4];
	return (pipex(pa, envp));
}
