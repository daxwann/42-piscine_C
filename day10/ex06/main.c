/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:28:29 by xwang             #+#    #+#             */
/*   Updated: 2018/08/07 17:35:34 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_error(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' && argv[2][0] != '*' &&
				argv[2][0] != '%')
		return (1);
	return (0);
}

int	calc(int a, int b, char **argv)
{
	int result;
	int (*ptr[5])(int x, int y);

	ptr[0] = &plus;
	ptr[1] = &minus;
	ptr[2] = &multiply;
	ptr[3] = &divide;
	ptr[4] = &modulo;
	if (argv[2][0] == '+')
		result = ptr[0](a, b);
	if (argv[2][0] == '-')
		result = ptr[1](a, b);
	if (argv[2][0] == '*')
		result = ptr[2](a, b);
	if (argv[2][0] == '/')
		result = ptr[3](a, b);
	if (argv[2][0] == '%')
		result = ptr[4](a, b);
	return (result);
}

int	main(int argc, char **argv)
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
