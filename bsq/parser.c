/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 20:16:50 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_list.h"
#include "parser.h"
#include "list_utils.h"

int		get_nb_row(t_list *begin_list)
{
	t_list	*list;
	int		nb_row;
	int		i;

	list = begin_list;
	nb_row = 0;
	while (list)
	{
		i = -1;
		while (list->data[++i])
			if (list->data[i] == '\n')
				++nb_row;
		list = list->next;
	}
	return (nb_row);
}

char	get_char_from_list(t_list *begin_list, long index)
{
	t_list	*list;
	long	cur_index;

	cur_index = 0;
	list = begin_list;
	while (list)
	{
		if (index < cur_index + list->data_len)
			return (list->data[index - cur_index]);
		cur_index += list->data_len;
		list = list->next;
	}
	return (-1);
}

int		get_row_len(t_list *begin_list, int row)
{
	int		i;
	int		row_count;
	int		char_count;
	t_list	*list;

	row_count = -1;
	list = begin_list;
	char_count = 0;
	while (list)
	{
		i = -1;
		while (list->data[++i])
		{
			if (list->data[i] == '\n')
			{
				++row_count;
				if (row_count == row)
					return (row == 0 ? char_count + 1 : char_count);
				char_count = 0;
			}
			++char_count;
		}
		list = list->next;
	}
	return (0);
}

char	**conv_linked_list(t_list *begin_list)
{
	char	**result;
	int		value[4];
	t_list	*list;
	long	count;

	value[NB_ROW] = get_nb_row(begin_list);
	if (!(result = malloc((value[NB_ROW] + 1) * sizeof(*result))))
		return (NULL);
	result[value[NB_ROW]] = NULL;
	value[I] = -1;
	list = begin_list;
	count = 0;
	while (++value[I] < value[NB_ROW])
	{
		value[J] = -1;
		value[CUR_ROW_LEN] = get_row_len(begin_list, value[I]);
		if (!(result[value[I]] = malloc((value[CUR_ROW_LEN] + 1)
						* sizeof(**result))))
			return (NULL);
		fill_table(value, result, list, &count);
		result[value[I]][value[J]] = '\0';
	}
	clear_list(begin_list);
	return (result);
}

char	**parse_file(int fd)
{
	int		data_read;
	char	*buffer;
	t_list	*list;
	char	has_read;

	if (!(buffer = malloc(4000000 * sizeof(*buffer))))
		return (NULL);
	list = NULL;
	has_read = 0;
	while ((data_read = read(fd, buffer, 4000000 - 1)) > 0)
	{
		buffer[data_read] = '\0';
		list_push_back_buffer(&list, buffer);
		has_read = 1;
	}
	free(buffer);
	return (has_read ? conv_linked_list(list) : NULL);
}
