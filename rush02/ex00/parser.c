/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:05:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 12:23:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "ft_list.h"

char	**conv_linked_list(t_list *begin_list)
{
	
}

char	**parse_stdin()
{
	int		tot_len;
	int		data_read;
	char	*buffer;

	if (!(buffer = malloc(BUFF_LEN * sizeof(*buffer))))
		return (NULL);
	tot_len = 0;
	while ((data_red = read(0, buffer, BUFF_LEN - 1)) > 0)
	{
		
	}	
}
