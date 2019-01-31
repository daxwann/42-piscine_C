/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 12:01:42 by xwang             #+#    #+#             */
/*   Updated: 2018/08/02 14:58:44 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	range_len;

	if (min >= max)
		return (0);
	range_len = max - min;
	range = (int*)malloc(sizeof(*range) * (range_len));
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
