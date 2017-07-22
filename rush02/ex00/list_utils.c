/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:08:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 12:58:30 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	clear_list(t_list *begin_list)
{
	t_list	*list;
	t_list	*next;

	list = begin_list;
	while (list)
	{
		next = list->next;
		list->next = NULL;
		free(list);
	}
}

t_list	*create_elem(char data)
{
	t_list	*result;

	if (!(result = malloc(1 * sizeof(*result))))
		return (NULL);
	result->next = NULL;
	result->data = data;
	return (result);
}

char	list_push_back(t_list **begin_list, char data)
{
	t_list	*result;
	t_list	*list;

	if (!begin_list)
	{
		*begin_list = create_elem(data);
		return (0);
	}
	if (!(result = create_elem(data)))
		return (0);
	while (list)
		list = list->next;
	list->next = result;
	return (1);
}

char	list_push_back_buffer(t_list **begin_list, char *buffer)
{
	int		i;

	i = -1;
	while (buffer[++i])
	{
		if (!begin_list)
			*begin_list = create_elem(buffer[i]);
		else if (!(list_push_back(begin_list, buffer[i])))
			return (0);
	}
	return (1);
}
