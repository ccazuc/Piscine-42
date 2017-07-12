/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:08:56 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 18:16:03 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	*list = *begin_list;
	if(!list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_elem(data);
}
