/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:32:22 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/09 02:33:32 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
	// no check for overrun by summing lengths
{
	char	*res;
	size_t	i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(len1 + len2 + 1);
	if (! res)
		return (NULL);
	i = 0;
	while (s1[0])
		res[i++] = s1++[0];
	while (s2[0])
		res[i++] = s2++[0];
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "hijkl";
	char	s3[] = "xyz";
	char	*s;
	char	*new;
	unsigned int	start;
	size_t	len;

	new = ft_strjoin(s1, s2);
	printf("s1 >%s< is at %p\ns2 >%s< is at %p\n", s1, s1, s2, s2);
	printf("res >%s< is at %p\n", new, new);

}
*/
