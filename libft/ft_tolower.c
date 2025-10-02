/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 02:31:50 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/08 02:41:36 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
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
		printf("%c", ft_tolower(s[i++]));
}
*/
