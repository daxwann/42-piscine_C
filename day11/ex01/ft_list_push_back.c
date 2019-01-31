/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:28:10 by xwang             #+#    #+#             */
/*   Updated: 2018/08/08 17:27:07 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *node;

	node = ft_create_elem(data);
	if ((*begin_list) == NULL)
	{
		(*begin_list) = node;
	}
	else
	{
		current = (*begin_list);
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
}
