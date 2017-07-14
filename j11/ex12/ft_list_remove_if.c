/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:46:30 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/13 10:51:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*prev;

	list = *begin_list;
	prev = NULL;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			prev->next = list->next;
			free(list);			
		}
		prev = list;
		list = list->next;
	}
}
