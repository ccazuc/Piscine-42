/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:37:43 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 19:46:40 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (!begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}
