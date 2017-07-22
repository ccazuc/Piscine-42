/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 13:09:35 by ccazuc           ###   ########.fr       */
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
	}
	return (nb_row);
}

int		get_row_len(t_list *begin_list, int row)
{
	int		i;
	int		count;
	t_list	*list;

	i = 0;
	count = 0;
	list = begin_list;
	while (list)
	{
		printf("list char: '%c'\n", list->data);
		if (list->data == '\n')
		{
			++count;
			if (count == row)
				return (i + 1);
			i = 0;
		}
		++i;
	}
	return (i);
}

char	**conv_linked_list(t_list *begin_list, int tot_len)
{
	char	**result;
	int		nb_row;
	int		cur_index;
	int		i;
	t_list	*list;

	nb_row = get_nb_row(begin_list);
	if (!(result = malloc(nb_row * sizeof(*result))))
		return (NULL);
	i = 0;
	printf("number row: %d\n", nb_row);
	list = begin_list;
	//NOT FINISHED
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
