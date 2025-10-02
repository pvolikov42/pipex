/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:11:28 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/06 02:47:44 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
# include <stdio.h>

int main (void)
{
	unsigned char	c;

	c = '\0';
	while (c < 255)
	{
		printf("%d: %c isprint %d\n", c, c, ft_isprint(c));
		c++;
	}
	printf("%d: %c isprint %d\n", c, c, ft_isprint(c));
}	
*/
