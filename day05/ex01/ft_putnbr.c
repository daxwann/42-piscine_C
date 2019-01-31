/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 09:34:57 by xwang             #+#    #+#             */
/*   Updated: 2018/07/31 11:54:08 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
