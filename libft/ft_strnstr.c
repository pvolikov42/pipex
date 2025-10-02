/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.lu>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:51:40 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/08 18:55:10 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *pttrn, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && i < n)
	{
		while (str[i + j] == pttrn[j] && pttrn[j] != '\0' && i + j < n)
			j++;
		if (pttrn[j] == '\0')
			return (&str[i]);
		j = 0;
		i++;
	}
	if (pttrn[j] == '\0')
		return (&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	p[] = "123";
	char	s2[] = "sdf1sDFg â 12sdjlkh wertg RR34 ASD.s123d";
	char	s3[] = "sdf1sDFg â 12sdjlkh wertg RR34 ASD.sd";
	char	s4[] = "abc123";
	char	s5[] = "";
	char	s6[] = "sd123f1sDFg â 12sdj123lkh wertg RR34 ASD.s123d";
	char	*s;
	char	*res;
	size_t	n;

	n = 10;
	s = s2;
	printf("Searching '%s' in %ld first bytes of\n%s\n", p, n, s);
	res = ft_strnstr(s, p, n);
	if (res)
		printf("found at pos: %ld\n", res - s);	
	else
		printf("not found\n");

	n = 10;
	s = s3;
	printf("Searching '%s' in %ld first bytes of\n%s\n", p, n, s);
	res = ft_strnstr(s, p, n);
	if (res)
		printf("found at pos: %ld\n", res - s);	
	else
		printf("not found\n");

	n = 10;
	s = s4;
	printf("Searching '%s' in %ld first bytes of\n%s\n", p, n, s);
	res = ft_strnstr(s, p, n);
	if (res)
		printf("found at pos: %ld\n", res - s);	
	else
		printf("not found\n");

	n = 10;
	s = s5;
	printf("Searching '%s' in %ld first bytes of\n%s\n", p, n, s);
	res = ft_strnstr(s, p, n);
	if (res)
		printf("found at pos: %ld\n", res - s);	
	else
		printf("not found\n");

	n = 10;
	s = s6;
	printf("Searching '%s' in %ld first bytes of\n%s\n", p, n, s);
	res = ft_strnstr(s, p, n);
	if (res)
		printf("found at pos: %ld\n", res - s);	
	else
		printf("not found\n");
}
*/
