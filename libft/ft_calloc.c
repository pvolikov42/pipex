/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:58:00 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/18 19:33:29 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t		total;
	size_t		i;
	void		*res;

	if (!size || !n)
		return (malloc(0));
	if ((size_t)-1 / size < n)
		return (NULL);
	total = n * size;
	res = malloc(total);
	if (!res)
		return (NULL);
	i = 0;
	while (i < total)
		*((unsigned char *)res + i++) = '\0';
	return (res);
}

/*
#include <stdio.h>

void ft_memprint(void *ptr, size_t size)
{
	unsigned char	c;
	unsigned char	delim;
	size_t			i;

	i = 0;
	while (i < size)
	{
		c = *((unsigned char *)ptr + i);
		if (i % 256 == 0)
			printf("---\n");
		if (i % 16 == 7) 
			delim = '-';
		else 
			delim = ' ';
		printf("%02x%c", c, delim);	
		if (i % 16 == 15)
			printf("\n");
		i++;
	}
	printf("\n");
}
	
int	main(void)
{
	void		*ptr;
	size_t		size;
	size_t		n;
	char		s[] = "abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJ";

	// ft_memprint(s, 21); 

	n = 0;
	size = 1024;
	printf("ft_calloc(nmemb=%ld,size=%ld)\n", n, size);
	ptr = ft_calloc(n, size);
	printf("result=%p\n", ptr);
	if (ptr) 
	{
		if (n * size < 4096) ft_memprint(ptr, n * size);
		free(ptr);
		printf("freed\n");
	}
	else
		printf("Not allocated\n");

	n = 2048;
	size = 1048576;
	printf("ft_calloc(nmemb=%ld,size=%ld)\n", n, size);
	ptr = ft_calloc(n, size);
	printf("result=%p\n", ptr);
	if (ptr) 
	{
		if (n * size < 4096) ft_memprint(ptr, n * size);
		free(ptr);
		printf("freed\n");
	}
	else
		printf("Not allocated\n");

}
*/
