/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:20:26 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/16 16:40:42 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	data;
	t_list	*list;
	t_list	*count;

	list = *begin_list;
	while (list->next)
	{
		count = list;
		while (count->next)
			if (cmp(count->data, list->data) > 0)
			{
				data = count->data;
				count->data = list ->data;
				list->data = data;
			}
		list = list->next;
	}
}
