/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 14:23:29 by xwang             #+#    #+#             */
/*   Updated: 2018/07/28 14:36:44 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int times;
	int result;

	times = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (times <= power)
	{
		result = result * nb;
		times++;
	}
	return (result);
}
