/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:32:22 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/09 00:52:52 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;
	size_t	len;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	res = (char *)malloc(len + 1);
	if (! res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "xyz";
	char	s3[] = "hijkl";
	char	*s;
	char	*new;

	s = s1;
	new = ft_strdup(s);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

	s = s2;
	new = ft_strdup(s);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

	s = s3;
	new = ft_strdup(s);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

}
*/
