/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:09:41 by pvolikov          #+#    #+#             */
/*   Updated: 2025/10/03 12:46:14 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

static char	*get_command_path(char *cmd, char **envp)
{
	char	**paths;
	char	*full_path;
	int		i;

	while (*envp && ft_strncmp(*envp, "PATH=", 5) != 0)
		envp++;
	if (!*envp)
		return (NULL);
	paths = ft_split(*envp + 5, ':');
	i = 0;
	while (paths[i])
	{
		full_path = ft_strjoin(ft_strjoin(paths[i], "/"), cmd);
		if (access(full_path, X_OK) == 0)
			return (full_path);
		free(full_path);
		i++;
	}
	return (NULL);
}

void	execute_command(char *cmd, char **envp)
{
	char	**args;
	char	*cmd_path;

	args = ft_split(cmd, ' ');
	if (!args || !args[0])
		error_exit("Invalid command");
	if (access(args[0], X_OK) == 0)
		cmd_path = args[0];
	else
		cmd_path = get_command_path(args[0], envp);
	if (!cmd_path)
	{
		write(2, "command not found: ", 20);
		write(2, args[0], ft_strlen(args[0]));
		write(2, "\n", 1);
		exit(127);
	}
	execve(cmd_path, args, envp);
	perror("execve");
	exit(EXIT_FAILURE);
}
