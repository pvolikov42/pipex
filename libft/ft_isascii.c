/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/06 02:43:33 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
# include <stdio.h>

int main (void)
{
	unsigned char	c;

	c = '\0';
	while (c < 255)
	{
		printf("%d: %c isascii %d\n", c, c, ft_isascii(c));
		c++;
	}
	printf("%d: %c isascii %d\n", c, c, ft_isascii(c));
}	
*/
