/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:47:42 by pvolikov          #+#    #+#             */
/*   Updated: 2025/07/31 18:46:08 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//#include <stdio.h>

static int	count_words(const char *str, const char sep)
{
	int	cnt;
	int	sepflag;

	sepflag = 1;
	cnt = 0;
	while (*str)
	{
		if (*str == sep)
			sepflag = 1;
		else if (sepflag)
		{
			cnt++;
			sepflag = 0;
		}
		str++;
	}
	return (cnt);
}

static void	free_seq(char **seq)
{
	while (*seq)
	{
		free((void *)*seq);
		seq++;
	}
}

static int	create_wordseq(const char *s, char **dir, char sep)
{
	int		cnt;
	char	*res;
	char	*next_sep;

	cnt = 0;
	while (*s)
	{
		next_sep = ft_strchr(s, sep);
		if (!next_sep)
			next_sep = (char *)s + ft_strlen(s);
		if (next_sep - s == 0)
		{
			s++;
			continue ;
		}
		res = ft_substr(s, 0, next_sep - s);
		if (! res)
			return (cnt);
		dir[cnt++] = res;
		s = next_sep;
	}
	return (cnt);
}

/*
static void	ft_refer_n_terminate(char *s, char **dir, char sep)
	// substitutes delimiter with '\0'
	// sets pointers in dir to the beginning of each non-empty delimited chunk
{
	int	i;
	int	cnt;
	int	sepflag;

	sepflag = 1;
	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == sep)
		{
			s[i] = '\0';
			sepflag = 1;
		}
		else if (sepflag)
		{
			dir[cnt++] = &s[i];
			sepflag = 0;
		}
		i++;
	}
}
*/

char	**ft_split(char const *s, char c)
	// this function will ignore adjacent separators
{
	int		i;
	int		cnt;
	char	**dir;

	cnt = count_words(s, c);
	dir = (char **)malloc((sizeof(char *)) * (cnt + 1));
	if (! dir)
		return (NULL);
	i = 0;
	while (i <= cnt)
		dir[i++] = NULL;
	if (create_wordseq(s, dir, c) != cnt)
	{
		free_seq(dir);
		free(dir);
		return (NULL);
	}
	return (dir);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc:def:g:hi::z";
	char	s2[] = ":ABC";
	char	s3[] = "123";
	char	s4[] = "::";
	char	s5[] = "  tripouille  42  ";
	char	sep = ':';
	char	sep2 = ' ';
	char	**res;
	char	*s;

	printf("'%s' delimited by '%c' -> %d words\n", 
		s5, sep2, count_words(s5, sep2));
	printf("'%s' delimited by '%c' -> %d words\n", 
		s1, sep, count_words(s1, sep));
	printf("'%s' delimited by '%c' -> %d words\n", 
		s2, sep, count_words(s2, sep));
	printf("'%s' delimited by '%c' -> %d words\n", 
		s3, sep, count_words(s3, sep));
	printf("'%s' delimited by '%c' -> %d words\n", 
		s4, sep, count_words(s4, sep));
	fflush(stdout);
	
	s = s1;
	res = ft_split(s, sep);
	printf("'%s' delimited by '%c' is splitted in:\n", s, sep);
	while (res[0])
		printf("'%s'\n", res++[0]);

	s = s2;
	res = ft_split(s, sep);
	printf("'%s' delimited by '%c' is splitted in:\n", s, sep);
	while (res[0])
		printf("'%s'\n", res++[0]);

	s = s3;
	res = ft_split(s, sep);
	printf("'%s' delimited by '%c' is splitted in:\n", s, sep);
	while (res[0])
		printf("'%s'\n", res++[0]);

	s = "";
	res = ft_split(s, sep);
	printf("'%s' delimited by '%c' is splitted in:\n", s, sep);
	while (res[0])
		printf("'%s'\n", res++[0]);

}
*/
