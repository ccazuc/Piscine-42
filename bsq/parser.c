/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 14:19:01 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
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

char	get_char_from_row(t_list *begin_list, int row, int column)
{
	int		i;
	int		row_count;
	int		char_count;
	t_list	*list;

	row_count = 0;
	char_count = 0;
	list = begin_list;
	while (list)
	{
		i = -1;
		while (list->data[++i])
		{
			if (row_count == row && char_count == column)
				return (list->data[i]);
			++char_count;
			if (list->data[i] == '\n')
			{
				++row_count;
				char_count = 0;
			}
		}
		list = list->next;
	}
	return (0);
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
					return (char_count);
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
	int		i;
	int		j;

	value[NB_ROW] = get_nb_row(begin_list);
	if (!(result = malloc((value[NB_ROW] + 1) * sizeof(*result))))
		return (NULL);
	result[value[NB_ROW]] = NULL;
	value[I] = -1;
	list = begin_list;
	printf("nb_row: %d\n", value[NB_ROW]);
	while (++value[I] < value[NB_ROW])
	{
		value[J] = -1;
		value[CUR_ROW_LEN] = get_row_len(begin_list, value[I]);
		//printf("cur_row_len: %d, i: %d\n", value[CUR_ROW_LEN], value[I]);
		if (!(result[value[I]] = malloc((value[CUR_ROW_LEN] + 1)
						* sizeof(**result))))
			return (NULL);
		while (++value[J] < value[CUR_ROW_LEN])
		{
			result[value[I]][value[J]] = get_char_from_row(begin_list,
					value[I], value[J]);
			printf("curr_char: '%c', curr_char_value: %d, i: %d, j: %d\n", get_char_from_row(begin_list, value[I], value[J]), get_char_from_row(begin_list, value[I], value[J]), value[I], value[J]);
		}
		result[value[I]][value[J]] = '\0';
	}
	clear_list(begin_list);
	i = -1;
	printf("start print\n");
	while (result[++i])
	{
		j = -1;
		while (result[i][++j])
			printf("%c", result[i][j]);
	}
	printf("end print\n");
	return (result);
}

char	**parse_file(char *file_name)
{
	int		data_read;
	int		fd;
	char	*buffer;
	t_list	*list;

	if (!(buffer = malloc(4000000 * sizeof(*buffer))))
		return (NULL);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	list = NULL;
	while ((data_read = read(fd, buffer, 4000000 - 1)) > 0)
	{
		buffer[data_read] = '\0';
		list_push_back_buffer(&list, buffer);
		printf("read %d byte\n", data_read);
	}
	free(buffer);
	return (conv_linked_list(list));
}
