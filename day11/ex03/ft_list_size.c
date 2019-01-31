/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:43:03 by xwang             #+#    #+#             */
/*   Updated: 2018/08/08 18:51:13 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
