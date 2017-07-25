/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:08:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 16:55:43 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "str.h"
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
		free(list->data);
		free(list);
		list = next;
	}
}

int		find_elem(t_list *begin_list, char elem)
{
	t_list	*list;
	int		i;
	int		count;

	if (!begin_list)
		return (0);
	list = begin_list;
	count = 0;
	while (list)
	{
		i = -1;
		while (list->data[++i])
		{
			if (list->data[i] == elem)
				return (count);
			++count;
		}
		list = list->next;
		++count;
	}
	return (0);
}

t_list	*create_elem(char *data)
{
	t_list	*result;

	if (!(result = malloc(1 * sizeof(*result))))
		return (NULL);
	result->next = NULL;
	result->data = ft_strndup(data, ft_strlen(data));
	result->data_len = ft_strlen(data);
	return (result);
}

char	list_push_back(t_list **begin_list, char *data)
{
	t_list	*list;

	if (!*begin_list)
	{
		*begin_list = create_elem(data);
		return (0);
	}
	list = *begin_list;
	while (list->next)
		list = list->next;
	list->next = create_elem(data);
	return (1);
}

char	list_push_back_buffer(t_list **begin_list, char *buffer)
{
	if (!*begin_list)
		*begin_list = create_elem(buffer);
	else
		list_push_back(begin_list, buffer);
	return (1);
}
