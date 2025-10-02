/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:54:12 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/10 18:42:04 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = ft_strdup(s);
	if (! res)
		return (NULL);
	i = 0;
	while (res[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}

/*
#include <stdio.h>

char char_shift(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

int	main(void)
{
	char	s[] = "abcd efg";
	char	*new;

	new = ft_strmapi(s, char_shift);
	printf("strmapi for '%s' with f() renders '%s'\n", s, new); 
}
*/