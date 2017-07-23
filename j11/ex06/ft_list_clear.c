/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:11:36 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 16:23:30 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*next;

	list = *begin_list;
	while (list)
	{
		next = list->next;
		list->next = NULL;
		free(list);
		list = next;
	}
	begin_list = NULL;
}
