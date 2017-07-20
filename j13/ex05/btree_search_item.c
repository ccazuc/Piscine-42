/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:37:03 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/19 12:45:29 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	btree_search_item(root->right, data_ref, cmpf);
	return (NULL);
}

int		main(void)
{
	return (0);
}
