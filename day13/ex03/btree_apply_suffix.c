/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:39:18 by xwang             #+#    #+#             */
/*   Updated: 2018/08/10 13:40:14 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
		applyf(root->item);
	}
}
