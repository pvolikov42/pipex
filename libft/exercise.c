/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <pvolikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:48:44 by pvolikov          #+#    #+#             */
/*   Updated: 2025/06/20 19:38:29 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 //   ? : 

/*
int a, b, c;

 a ? b : c

if (a)
  b;
else
  c;


f = a ? b : c;


h + j = f * (8 > 6) - h++


f = g++;
*/
#include <stdio.h>

int	step_1(int a, int b, int c)
{
	//int	a;
	//int b;
	//int	c;
	
	//a = 10;
	//b = 20;
	printf(">a=%d\n", a);
	printf(">b=%d\n", b);
	printf(">c=%d\n", c);
	a = 101;
	b = 102;
	c = 103;
	printf(">a=%d\n", a);
	printf(">b=%d\n", b);
	printf(">c=%d\n", c);
	return (a);
}

void	step_2(int *a, int *b, int *c)
{
	//int	a;
	//int b;
	//int	c;
	
	//a = 10;
	//b = 20;
	printf(">a=%d\n", *a);
	printf(">b=%d\n", *b);
	printf(">c=%d\n", *c);
	*a = *a + *b;
	*b = *b + 3;
	*c = *c + 1;
	printf(">a=%d\n", *a);
	printf(">b=%d\n", *b);
	printf(">c=%d\n", *c);
}


int main(void)
{
	int	a, b, c, d;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	//c = step_1(a, b, c);
	step_2(&a, &b, &c);
	printf("d=%d\n", d);
	printf("a+b=%d\n", a + b);
	printf("a-c=%d\n", a - c);
}

