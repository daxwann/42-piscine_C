/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:25:00 by xwang             #+#    #+#             */
/*   Updated: 2018/08/02 15:51:28 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_len;
	int *ptr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range_len = max - min;
	ptr = (int*)malloc(sizeof(*ptr) * (range_len));
	if (ptr == NULL)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
