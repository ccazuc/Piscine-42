/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 12:35:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "ft_list.h"

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

char	**conv_linked_list(t_list *begin_list, int tot_len)
{
	char	**result;
	int		nb_row;

	nb_row = get_nb_row(begin_list);
	if (!(result = malloc(nb_row * sizeof(*result))))
		return (NULL);
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
		tot_len =+ data_read;
		buffer[data_read] = '\0';
		ft_list_push_back_buffer(&list, buffer);
	}
	return conv_linked_list(list, tot_len);
}
