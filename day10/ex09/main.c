/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:28:29 by xwang             #+#    #+#             */
/*   Updated: 2018/08/07 13:00:40 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int check_error(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' && argv[2][0] != '*' &&
				argv[2][0] != '%')
		return (1);
	return (0);
}

int calc(int a, int b, char **argv)
{
	int result;

	if (argv[2][0] == '+')
		result = plus(a, b);
	if (argv[2][0] == '-')
		result = minus(a, b);
	if (argv[2][0] == '*')
		result = multiply(a, b);
	if (argv[2][0] == '/')
		result = divide(a, b);
	if (argv[2][0] == '%')
		result = modulo(a, b);
	return (result);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if (check_error(argc, argv) == 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (1);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	ft_putnbr(calc(a, b, argv));
	ft_putchar('\n');
	return (0);
}
