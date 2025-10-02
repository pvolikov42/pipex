/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/06 03:27:09 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

/*
# include <stdio.h>

int main (void)
{
	unsigned char	c;

	c = '\0';
	while (c < 255)
	{
		printf("%d: %c isalnum %d\n", c, c, ft_isalnum(c));
		c++;
	}
	printf("%d: %c isalnum %d\n", c, c, ft_isalnum(c));
}	
*/
