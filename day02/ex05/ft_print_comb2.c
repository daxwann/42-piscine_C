/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:32:35 by xwang             #+#    #+#             */
/*   Updated: 2018/07/26 23:29:48 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int digit[2];

	digit[0] = 0;
	while (digit[0] <= 98)
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= 99)
		{
			ft_putchar(digit[0] / 10 + '0');
			ft_putchar(digit[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(digit[1] / 10 + '0');
			ft_putchar(digit[1] % 10 + '0');
			if (!(digit[0] == 98 && digit[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
