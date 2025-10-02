/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/17 20:26:53 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*pos;
	unsigned char	c1;

	c1 = (unsigned char)c;
	pos = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			pos = (char *)s + i;
		i++;
	}
	if (s[i] == c1)
		pos = (char *)s + i;
	return (pos);
}

/*
#include <stdio.h>

int	main(void)
{
	char	stage[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char	c;
	char	*ptr;

	c = 'a';
	printf("Stage :%s\n", stage);
	printf("Rev search of '%c'\nstarted at %p\n", c, stage);
	ptr = ft_strrchr(stage, c);
	if (ptr)
	{
		printf("  found at %p\n", ptr);
		printf("Diff=%ld\n", ptr - stage);
	}
	else
		printf("Not found or error\n");
}
*/
