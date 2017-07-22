/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 14:39:42 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"
#include "parser.h"
#include "list_utils.h"
#include <stdio.h>

int		get_nb_row(t_list *begin_list)
{
	t_list *list;
	int		nb_row;

	list = begin_list;
	nb_row = 0;
	while (list)
	{
		if (list->data == '\n')
			++nb_row;
		list = list->next;
		//printf("get_nb: %d\n", nb_row);
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
		{
			printf("get_char_from_row i: %d j: %d char: '%c'\n", i, j, list->data);
			return (list->data);
		}
		if (list->data == '\n')
		{
			++i;
			j = 0;
		}
		++j;
		list = list->next;
	}
	return (0);
}

int		get_row_len(t_list *begin_list, int row)
{
	int		i;
	int		count;
	t_list	*list;

	i = 0;
	count = -1;
	list = begin_list;
	while (list)
	{
		//printf("list char: '%c'\n", list->data);
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

char	**conv_linked_list(t_list *begin_list, int tot_len)
{
	char	**result;
	int		nb_row;
	int		j;
	int		i;
	int		cur_row_len;
	t_list	*list;

	tot_len++;
	nb_row = get_nb_row(begin_list);
	if (!(result = malloc((nb_row + 1) * sizeof(*result))))
		return (NULL);
	result[nb_row] = NULL;
	i = -1;
	printf("number row: %d\n", nb_row);
	list = begin_list;
	printf("char debug: '%c'\n", get_char_from_row(begin_list, 3, 0));
	while (++i < nb_row)
	{
		j = -1;
		cur_row_len = get_row_len(begin_list, i);
		printf("cur_row_len: %d\n", cur_row_len);
		if (!(result[i] = malloc((cur_row_len + 1) * sizeof(**result))))
			return (NULL);
		while (++j < cur_row_len)
		{
			result[i][j] = get_char_from_row(begin_list, i, j);
			printf("char i: %d j: %d char: '%c', char_value: %d\n", i, j, result[i][j], result[i][j]);
		}
		result[i][j] = '\0';
	}
	//clear_list(begin_list);
	return (result);
}

char	**parse_stdin()
{
	int		tot_len;
	int		data_read;
	char	*buffer;
	t_list	*list;

	if (!(buffer = malloc(BUFF_LEN * sizeof(*buffer))))
		return (NULL);
	tot_len = 0;
	list = NULL;
	while ((data_read = read(0, buffer, BUFF_LEN - 1)) > 0)
	{
		printf("data read: %d\n", data_read);
		tot_len += data_read;
		buffer[data_read] = '\0';
		list_push_back_buffer(&list, buffer);
	}
	return conv_linked_list(list, tot_len);
}
