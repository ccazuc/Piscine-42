/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:33:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/19 12:36:47 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!root)
	{
		root = btree_create_node(item);
		return ;
	}
	if (cmpf(root, root->left) >= 0)
		btree_insert_data(root->left, item);
	else
		btree_insert_data(root->right, item);
}
