/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/07 00:52:53 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;
	size_t	j;
	int		incr;

	if (dest == src)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	i = 1;
	if (dest > src)
	{
		incr = -1;
		i = n;
	}
	else
		incr = 1;
	while (i <= n && i > 0)
	{
		j = i - 1;
		d[j] = s[j];
		i += incr;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	stage[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	void	*s;
	void	*d;
	void	*ptr;

	s = stage + 26;
	d = stage + 13;
	//s = stage + 13;
	//d = stage + 26;
	printf("Stage before:%s\n", stage);
	ptr = ft_memmove(d, s, 25);
	printf("Stage after :%s\n", stage);
	printf("src_adr=%p, dst_addr=%p, res_addr=%p\n", s, d, ptr);
}
*/
