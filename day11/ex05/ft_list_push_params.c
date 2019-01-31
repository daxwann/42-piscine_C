/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 21:29:14 by xwang             #+#    #+#             */
/*   Updated: 2018/08/08 22:01:15 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	t_list	*head;
	int		i;

	head = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		node = ft_create_elem(av[i]);
		node->next = head;
		head = node;
		i++;
	}
	return (head);
}
