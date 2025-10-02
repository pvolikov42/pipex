/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:37:18 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/09 12:44:33 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	int		j;

	end = 0;
	start = -1;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set [j] && (set[j] != s1[i]))
			j++;
		if (set[j] == '\0')
			end = i;
		else
			if (end == 0)
				start = i;
		i++;
	}
	return (ft_substr(s1, start + 1, end - start));
}

/*
#include <stdio.h>

int	main(void)
{
	char	t[] = "02abcd7fgh90";
	char	t1[] = "abcd";
	char	t2[] = "abcdef00000";
	char	sep[] = "0123456789";
	char	*s1, *set;

	s1 = t;
	set = sep;
	printf("strtrim: s1=%s, set=%s, res=%s\n", s1, set, ft_strtrim(s1, set));
	
	s1 = t1;
	set = sep;
	printf("strtrim: s1=%s, set=%s, res=%s\n", s1, set, ft_strtrim(s1, set));
	
	s1 = t2;
	set = sep;
	printf("strtrim: s1=%s, set=%s, res=%s\n", s1, set, ft_strtrim(s1, set));

}
*/
