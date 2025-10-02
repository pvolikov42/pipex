/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:17:40 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/17 20:59:31 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\r'
		|| c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static char	*strip_spaces(char *str)
{
	while (str[0] != '\0' && ft_is_space(str[0]))
		str++;
	return (str);
}

static char	*process_sign(char *str, int *sign)
{
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			*sign = *sign * -1;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	int	i;

	number = 0;
	sign = 1;
	i = 0;
	str = strip_spaces(str);
	str = process_sign(str, &sign);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	return (number * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "234";
	char	s2[] = " 234";
	char	s3[] = "-234";
	char	s4[] = "789r23";
	char	s5[] = "-+- 235";
	char	s6[] = " 2f34";
	char	s7[] = "- 234";
	char	s8[] = "5 234";
	char	s9[] = "  -+-+-235k9";

	printf("%s -> %d\n", s1, ft_atoi(s1));
	printf("%s -> %d\n", s2, ft_atoi(s2));
	printf("%s -> %d\n", s3, ft_atoi(s3));
	printf("%s -> %d\n", s4, ft_atoi(s4));
	printf("%s -> %d\n", s5, ft_atoi(s5));
	printf("%s -> %d\n", s6, ft_atoi(s6));
	printf("%s -> %d\n", s7, ft_atoi(s7));
	printf("%s -> %d\n", s8, ft_atoi(s8));
	printf("%s -> %d\n", s9, ft_atoi(s9));
}
*/
