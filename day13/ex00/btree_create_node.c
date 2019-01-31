/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:49:02 by xwang             #+#    #+#             */
/*   Updated: 2018/08/10 11:18:16 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *head;

	head = malloc(sizeof(t_btree));
	head->item = item;
	head->left = NULL;
	head->right = NULL;
	return (head);
}
