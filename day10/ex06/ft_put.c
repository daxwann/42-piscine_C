/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 22:55:55 by xwang             #+#    #+#             */
/*   Updated: 2018/08/06 22:56:59 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char digit;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		else
			ft_putnbr(nb * -1);
	}
	if (nb >= 0 && nb <= 2147483647)
	{
		digit = (nb % 10) + '0';
		if (nb / 10 != 0)
		{
			ft_putnbr(nb / 10);
			nb = nb / 10;
		}
		ft_putchar(digit);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int negative;

	i = 0;
	result = 0;
	negative = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		result *= -1;
	return (result);
}
