/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:58:43 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/06 21:51:15 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "abcdABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		i;
	int		len;

	len = ft_strlen(s);
	printf("Before: ");
	i = 0;
	while (i < len)
		printf("%3d ", s[i++]);
	printf("\n");

	ft_bzero(s, len / 2);

	printf("After : ");
	i = 0;
	while (i < len)
		printf("%3d ", s[i++]);
	printf("\n");
}
*/
