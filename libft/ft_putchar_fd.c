/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:02:46 by pvolikov          #+#    #+#             */
/*   Updated: 2025/07/31 19:14:11 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_nputchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
