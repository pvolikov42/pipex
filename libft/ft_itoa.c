/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:42:44 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/12 02:47:07 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;

	i = count_digits(n);
	res = (char *)malloc((sizeof(char)) * (i + 1));
	if (! res)
		return (NULL);
	res[i] = '\0';
	res[i - 1] = '0';
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		res[0] = '-';
	}
	while (i-- > 0)
	{
		if (! (sign == -1 && i == 0))
			res[i] = '0' + (n % 10) * sign;
		n /= 10;
	}
	return (res);
}

/*
# include <stdio.h>
# include <limits.h>

int	main(void)
{
	int	n, start;

	n = -43;
	start = INT_MAX - 16;
	n = start;
	while (n++ < start + 15)
		printf("number %d -> string '%s'\n", n, ft_itoa(n));
}
*/
