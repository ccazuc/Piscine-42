/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:23:12 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/21 13:33:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
	{
		*begin_list = begin_list2;
		return ;
	}
	while (list->next)
		list = list->next;
}
