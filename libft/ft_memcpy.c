/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/06 22:26:26 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
# include <stdio.h>

int main (void)
{
	char	s[] = "internationalisation";
	char	d[] = "INTERNATIONALISATION";
	void	*ptr;

	printf("Src  before:%s\n", s);
	printf("Dest before:%s\n", d);
	ptr = ft_memcpy(d, s, 10);
	printf("Dest after :%s\n", d);
	printf("src_adr=%p, dst_addr=%p, res_addr=%p\n", s, d, ptr);
}	
*/
