/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:01:50 by xwang             #+#    #+#             */
/*   Updated: 2018/07/26 22:19:36 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				ft_putchar(digit[0]);
				ft_putchar(digit[1]);
				ft_putchar(digit[2]);
				if (!(digit[0] == '7' && digit[1] == '8' && digit[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
