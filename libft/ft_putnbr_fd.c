/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:15:42 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/13 18:41:45 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(long n, int fd)
{
	int		i;
	int		sign;
	char	d[40];

	sign = 1;
	if (n < 0)
		sign = -sign;
	d[0] = '0';
	i = 0;
	while (n != 0)
	{
		d[i] = '0' + sign * (n % 10);
		n /= 10;
		i++;
	}
	if (i == 0)
		i = 1;
	d[i] = '\0';
	if (sign == -1)
		ft_putchar_fd('-', fd);
	while (i-- > 0)
		ft_putchar_fd(d[i], fd);
}

int	ft_nputnbr_fd(long n, int fd)
{
	int		i;
	char	d[40];
	int		cnt;

	if (fd < 0)
		return (0);
	i = 0;
	cnt = 0;
	d[0] = '0';
	if (n < 0)
	{
		cnt += ft_nputchar_fd('-', fd);
		d[i++] = '0' - (n % 10);
		n /= -10;
	}
	while (n != 0)
	{
		d[i++] = '0' + n % 10;
		n /= 10;
	}
	if (i == 0)
		i = 1;
	while (i-- > 0)
		cnt += ft_nputchar_fd(d[i], fd);
	return (cnt);
}

int	ft_nputunbr_fd(unsigned long n, int fd)
{
	int		i;
	char	d[40];
	int		cnt;

	if (fd < 0)
		return (0);
	i = 0;
	cnt = 0;
	d[0] = '0';
	while (n != 0)
	{
		d[i++] = '0' + n % 10;
		n /= 10;
	}
	if (i == 0)
		i = 1;
	while (i-- > 0)
		cnt += ft_nputchar_fd(d[i], fd);
	return (cnt);
}

void	ft_putnbr(long n)
{
	ft_putnbr_fd(n, 1);
}

/*
#include <stdio.h>
#include <limits.h>
#include "libft.h"

int	main(void)
{
	long int	i;
	long int	start;

	//i = LONG_MIN;
	//i = 1234;
	//printf("-7 %% -3 = %d\n", -7 % -3);
	//fd_putnbr_fd("min=INT_MIN max=INT_MAX, i_value=%ld\n", i);
	//start = LONG_MIN;
	start = -70;
	i = start;
	while (i < start + 100)
	{
		printf("%ld -> ", i);
		fflush(stdout);
		ft_putnbr_fd(i, 1);
		ft_putendl_fd("", 1);
		i++;
	}
}
*/
