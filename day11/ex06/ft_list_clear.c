/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 22:12:32 by xwang             #+#    #+#             */
/*   Updated: 2018/08/08 23:37:50 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list **list;
	t_list *node;

	if ((*begin_list) == NULL)
		return ;
	node = *begin_list;
	list = &(node->next);
	ft_list_clear(list);
	free(*begin_list);
	*begin_list = NULL;
}
