/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:32:22 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/18 19:19:12 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
	// checks if start is within the string s
	// then moves s pointer to the start position (or to the terminator)
{
	char	*res;
	size_t	i;
	size_t	rlen;

	i = 0;
	while (i < start && s[i] != '\0')
		i++;
	s += i;
	rlen = 0;
	while (s[rlen] != '\0' && rlen < len)
		rlen++;
	res = (char *)malloc(rlen + 1);
	if (! res)
		return (NULL);
	i = 0;
	while (i < rlen)
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
	unsigned int	start;
	size_t	len;

	s = s1;
	start = 3;
	len = 3;
	printf("Substr start=%u, len=%ld\n", start, len);
	new = ft_substr(s, start, len);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

	s = s1;
	start = 13;
	len = 3;
	printf("Substr start=%u, len=%ld\n", start, len);
	new = ft_substr(s, start, len);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

	s = s1;
	start = 3;
	len = 20;
	printf("Substr start=%u, len=%ld\n", start, len);
	new = ft_substr(s, start, len);
	printf("src >%s< is at %p\ndst >%s< is at %p\n", s, s, new, new);

}
*/
