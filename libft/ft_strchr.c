/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/17 20:12:42 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	c1;

	i = 0;
	c1 = (unsigned char)c;
	while (s[i] != 0 && s[i] != c1)
		i++;
	if (s[i] == c1)
		return ((char *)s + i);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	stage[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char	c;
	char	*ptr;

	c = 'y';
	printf("Stage :%s\n", stage);
	ptr = ft_strchr(stage, c);
	if (ptr)
	{
		printf("Search of '%c'\nstarted at %p\n  found at %p\n", c, stage, ptr);
		printf("Diff=%ld\n", ptr - stage);
	}
	else
		printf("Not found or error\n");
}
*/
