/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:32:22 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/18 15:24:26 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;
	size_t	limit;

	i = 0;
	while (dest[i] != '\0')
		i++;
	len = i;
	if (dsize > len + 1)
		limit = dsize - len - 1;
	else
		limit = 0;
	i = 0;
	while (src[i] != '\0' && i < limit)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	while (src[i] != '\0')
		i++;
	if (dsize > len)
		return (len + i);
	else
		return (dsize + i);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "jklmn";
	char	s3[] = "opqrstuvwxyz";
	char	d[50];
	char	*s;
	int		n;
	int		res;

	memset(d, 0, 50);
	memset(d, 'A', 1);
	n = 0;
	s = s1;
	printf("Before: dest is >%s< src is >%s< lim=%d\n", d, s, n);
	res = strlcat(d, s, n);
	printf("Result: dest is >%s< now, retval=%d\n\n", d, res);

	n = 3;
	s = s2;
	printf("Before: dest is >%s< src is >%s< lim=%d\n", d, s, n);
	res = ft_strlcat(d, s, n);
	printf("Result: dest is >%s< now, retval=%d\n\n", d, res);

	n = 13;
	s = s3;
	printf("Before: dest is >%s< src is >%s< lim=%d\n", d, s, n);
	res = ft_strlcat(d, s, n);
	printf("Result: dest is >%s< now, retval=%d\n\n", d, res);
}
*/