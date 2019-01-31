/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 13:54:06 by xwang             #+#    #+#             */
/*   Updated: 2018/07/28 13:54:13 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 13)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
