/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 02:31:50 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/08 02:41:50 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ((int) ch);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Test StrinG.\n It's _VERY_ interesting ()!\n";
	int		i;

	i = 0;
	while (s[i])
		printf("%c", ft_toupper(s[i++]));
}
*/
