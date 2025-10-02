/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:06:42 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/11 19:15:29 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (s[0])
	{
		ft_putchar_fd(s[0], fd);
		s++;
	}
}

int	ft_nputstr_fd(char *s, int fd)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		cnt += ft_nputchar_fd(*s, fd);
		s++;
	}
	return (cnt);
}

void	ft_putstr(char *s)
{
	while (s[0])
	{
		ft_putchar(s[0]);
		s++;
	}
}
