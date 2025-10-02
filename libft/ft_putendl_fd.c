/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:11:12 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/13 16:44:50 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int	ft_nputendl_fd(char *s, int fd)
{
	return (ft_nputstr_fd(s, fd) + ft_nputchar_fd('\n', fd));
}

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

/*
#include <stdio.h>

int	main()
{
	char	*s1;
	int		cnt = 0;

	s1 = "abcde";

	printf("I will check string '%s' \n", s1);

	ft_putendl_fd(s1, 1);
	printf("!\n");
	
	cnt = ft_nputendl_fd(s1, 1);
	printf("!\n");
	printf("Printed %d symbols\n", cnt);

}

// stdin == 0  
// stdout == 1 
// sdterr == 2
*/
