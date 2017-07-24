/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 19:49:56 by ccazuc           ###   ########.fr       */
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

	list = begin_list;
	nb_row = 0;
	while (list)
	{
		if (list->data == '\n')
			++nb_row;
		list = list->next;
	}
	return (nb_row);
}

char	get_char_from_row(t_list *begin_list, int row, int column)
{
	int		i;
	int		j;
	t_list	*list;

	i = 0;
	j = 0;
	list = begin_list;
	while (list)
	{
		if (i == row && j == column)
			return (list->data);
		++j;
		if (list->data == '\n')
		{
			++i;
			j = 0;
		}
		list = list->next;
	}
	return (0);
}

int		get_row_len(t_list *begin_list, int row)
{
	int		i;
	int		count;
	t_list	*list;

	i = 1;
	count = -1;
	list = begin_list;
	while (list)
	{
		if (list->data == '\n')
		{
			++count;
			if (count == row)
				return (i);
			i = 0;
		}
		list = list->next;
		++i;
	}
	return (0);
}

char	**conv_linked_list(t_list *begin_list)
{
	char	**result;
	int		value[4];
	t_list	*list;

	value[NB_ROW] = get_nb_row(begin_list);
	if (!(result = malloc((value[NB_ROW] + 1) * sizeof(*result))))
		return (NULL);
	result[value[NB_ROW]] = NULL;
	value[I] = -1;
	list = begin_list;
	while (++value[I] < value[NB_ROW])
	{
		value[J] = -1;
		value[CUR_ROW_LEN] = get_row_len(begin_list, value[I]);
		if (!(result[value[I]] = malloc((value[CUR_ROW_LEN] + 1)
						* sizeof(**result))))
			return (NULL);
		while (++value[J] < value[CUR_ROW_LEN])
			result[value[I]][value[J]] = get_char_from_row(begin_list,
					value[I], value[J]);
		result[value[I]][value[J]] = '\0';
	}
	clear_list(begin_list);
	return (result);
}

char	**parse_file(char *file_name)
{
	int		data_read;
	int		fd;
	char	*buffer;
	t_list	*list;

	if (!(buffer = malloc(512 * sizeof(*buffer))))
		return (NULL);
	list = NULL;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while ((data_read = read(fd, buffer, BUFF_LEN - 1)) > 0)
	{
		buffer[data_read] = '\0';
		list_push_back_buffer(&list, buffer);
	}
	return (conv_linked_list(list));
}
