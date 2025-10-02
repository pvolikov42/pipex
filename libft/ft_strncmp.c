/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/17 20:56:15 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	if (n == 0)
		return (0);
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (t1[i] != '\0' && i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (t1[i] - t2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefgh";
	char	s2[] = "abcdefg\xC1";
	char	s3[] = "abcdefga";
	char	*str1, *str2;	
	int		res;
	int		n;

	n = 80;
	str1 = s1;
	str2 = s2;
	res = ft_strncmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);

	n = 8;
	str1 = s1;
	str2 = s3;
	res = ft_strncmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);

	n = 4;
	str1 = s1;
	str2 = s3;
	res = ft_strncmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);
}
*/
