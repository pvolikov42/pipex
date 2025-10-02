/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:15:42 by pvolikov          #+#    #+#             */
/*   Updated: 2025/07/31 16:17:11 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_putnbr_base_fd(long n, const char *base, int fd)
{
	int		i;
	int		base_n;
	char	d[130];

	base_n = ft_strlen(base);
	if (fd < 0 || base_n < 2 || base_n > 16)
		return ;
	i = 0;
	d[0] = base[0];
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		d[i++] = base[-(n % base_n)];
		n /= -base_n;
	}
	while (n != 0)
	{
		d[i++] = base[n % base_n];
		n /= base_n;
	}
	if (i == 0)
		i = 1;
	while (i-- > 0)
		ft_putchar_fd(d[i], fd);
}

static void	initvars(int *i, int *cnt, char *d, const char *base)
{
	*i = 0;
	*cnt = 0;
	d[0] = base[0];
}

int	ft_nputnbr_base_fd(long n, const char *base, int fd)
{
	int		i;
	int		base_n;
	char	d[128];
	int		cnt;

	base_n = ft_strlen(base);
	if (fd < 0 || base_n < 2 || base_n > 16)
		return (0);
	initvars(&i, &cnt, d, base);
	if (n < 0)
	{
		cnt += ft_nputchar_fd('-', fd);
		d[i++] = base[-(n % base_n)];
		n /= -base_n;
	}
	while (n != 0)
	{
		d[i++] = base[n % base_n];
		n /= base_n;
	}
	if (i == 0)
		i = 1;
	while (i-- > 0)
		cnt += ft_nputchar_fd(d[i], fd);
	return (cnt);
}

int	ft_nputunbr_base_fd(unsigned long n, const char *base, int fd)
{
	int		i;
	int		base_n;
	char	d[128];
	int		cnt;

	base_n = ft_strlen(base);
	if (fd < 0 || base_n < 2 || base_n > 16)
		return (0);
	i = 0;
	cnt = 0;
	d[0] = base[0];
	while (n != 0)
	{
		d[i++] = base[n % base_n];
		n /= base_n;
	}
	if (i == 0)
		i = 1;
	while (i-- > 0)
		cnt += ft_nputchar_fd(d[i], fd);
	return (cnt);
}

void	ft_putnbr_base(long n, const char *base)
{
	ft_putnbr_base_fd(n, base, 1);
}

/*
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int		n;
	int		cnt;
	char	d1[] = "o";
	char	d2[] = "01";
	char	d8[] = "01234567";
	char	d10[] = "0123456789";
	char	d16[] = "0123456789abcdef";

    printf( "-11 %% 3 = %d\n" , -11 % 3);
    n = -10;
    printf("%d -> %u\n", n, n);
	
	n = INT_MIN;
	//n = 10;
	ft_putnbr_base_fd(n, d1, 1); ft_putchar_fd('\n', 1);
	ft_putnbr_base_fd(n, d2, 1); ft_putchar_fd('\n', 1);
	ft_putnbr_base_fd(n, d8, 1); ft_putchar_fd('\n', 1);
	ft_putnbr_base_fd(n, d10, 1); ft_putchar_fd('\n', 1);
	ft_putnbr_base_fd(n, d16, 1); ft_putchar_fd('\n', 1);
    ft_putchar_fd('\n', 1);
    
	n = -1;
	while (n < 2)
	{ 
		ft_putnbr_base_fd(n, d2, 1); ft_putchar_fd('\n', 1);
		ft_putnbr_base_fd(n, d8, 1); ft_putchar_fd('\n', 1);
		ft_putnbr_base_fd(n, d10, 1); ft_putchar_fd('\n', 1);
		ft_putnbr_base_fd(n, d16, 1); ft_putchar_fd('\n', 1);
		ft_putchar_fd('\n', 1);
		n++;
	}

	n = INT_MIN;
	//n = -17;
	cnt = ft_nputnbr_base_fd(n, d2, 1); ft_nputchar_fd('\n', 1);
	fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
	cnt = ft_nputnbr_base_fd(n, d8, 1); ft_nputchar_fd('\n', 1);
	fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
	cnt = ft_nputnbr_base_fd(n, d10, 1); ft_nputchar_fd('\n', 1);
	fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
	cnt = ft_nputnbr_base_fd(n, d16, 1); ft_nputchar_fd('\n', 1);
	fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
	ft_nputchar_fd('\n', 1);
    
	n = -1;
	while (n < 2)
	{ 
		cnt = ft_nputnbr_base_fd(n, d2, 1); ft_nputchar_fd('\n', 1);
		fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
		cnt = ft_nputnbr_base_fd(n, d8, 1); ft_nputchar_fd('\n', 1);
		fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
		cnt = ft_nputnbr_base_fd(n, d10, 1); ft_nputchar_fd('\n', 1);
		fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
		cnt = ft_nputnbr_base_fd(n, d16, 1); ft_nputchar_fd('\n', 1);
		fflush(stdout); printf("printed %d chars\n", cnt); fflush(stdout);
		ft_nputchar_fd('\n', 1);
		n++;
	}
}
*/
