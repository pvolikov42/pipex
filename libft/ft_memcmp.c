/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/07 02:15:23 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefgh";
	char	s2[] = "abcdefgi";
	char	s3[] = "abcdefga";
	char	*str1, *str2;	
	int		res;
	int		n;

	n = 8;
	str1 = s1;
	str2 = s2;
	res = ft_memcmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);

	n = 8;
	str1 = s1;
	str2 = s3;
	res = ft_memcmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);

	n = 4;
	str1 = s1;
	str2 = s3;
	res = ft_memcmp(str1, str2, n);
	printf("Comparing...\ns1:%s\ns2:%s\n", str1, str2);
	printf("For first %d bytes result is %d\n", n, res);
}
*/
