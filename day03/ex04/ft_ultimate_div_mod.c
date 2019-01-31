/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:23:55 by xwang             #+#    #+#             */
/*   Updated: 2018/07/27 14:33:54 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div_result;
	int mod_result;

	div_result = *a / *b;
	mod_result = *a % *b;
	*a = div_result;
	*b = mod_result;
}
