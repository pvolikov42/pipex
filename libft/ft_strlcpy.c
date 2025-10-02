/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:32:22 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/18 13:53:36 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	if (dsize == 0)
		return (ft_strlen(src));
	i = 0;
	dsize--;
	while (src[i] != '\0' && i < dsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "xyz";
	char	s3[] = "hijkl";
	char	d[50];
	char	*s;
	int		n;
	int		res;

	n = 10;
	s = s1;
	printf("src is '%s' cur dest is '%s' lim=%d\n", s, d, n);
	res = ft_strlcpy(d, s, n);
	printf("dest is '%s' retval=%d\n", d, res);

	n = 2;
	s = s2;
	printf("src is '%s' cur dest is '%s' lim=%d\n", s, d, n);
	res = ft_strlcpy(d, s, n);
	printf("dest is '%s' retval=%d\n", d, res);

	n = 10;
	s = s3;
	printf("src is '%s' cur dest is '%s' lim=%d\n", s, d, n);
	res = ft_strlcpy(d, s, n);
	printf("dest is '%s' retval=%d\n", d, res);
}
*/
