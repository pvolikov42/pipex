/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:53:07 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/11 17:31:40 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	char_crunch1(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}


int	main(void)
{
	int		i;
	char 	c;
	char	s1[] = "abcd";

	printf("Start tests\n");
	
	printf("Testing ft_striteri ...\n");
	printf("Before: %s\n", s1);
	ft_striteri(s1, char_crunch1);
	printf(" After: %s\n", s1);
}