/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:09:41 by pvolikov          #+#    #+#             */
/*   Updated: 2025/11/07 18:08:34 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

void	execute_command(char *cmd, char **envp)
// execute command by feeding string cmd to /bin/sh -c
{
	char	*sh_argv[4];

if (!cmd || !*cmd)
		error_exit("No command provided");
	sh_argv[0] = "/bin/sh";
	sh_argv[1] = "-c";
	sh_argv[2] = cmd;
	sh_argv[3] = NULL;
	execve(sh_argv[0], sh_argv, envp);
	perror("execve");
	exit(EXIT_FAILURE);
}
