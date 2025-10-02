/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/07 01:43:52 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *pos, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)pos;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	stage[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char	c;
	void	*ptr;

	c = 'y';
	printf("Stage :%s\n", stage);
	ptr = ft_memchr(stage, c, 26 * 2);
	if (ptr)
	{
		printf("Search of '%c'\nstarted at %p\n  found at %p\n", c, stage, ptr);
		printf("Diff=%ld\n", (char *)ptr - stage);
	}
	else
		printf("Not found or error\n");
}
*/
