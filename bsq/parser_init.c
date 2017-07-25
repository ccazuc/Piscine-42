/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 18:31:39 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 18:44:19 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void	fill_table(int value[4], char **result, t_list *begin_list, long *count)
{
	while (++value[J] < value[CUR_ROW_LEN])
	{
		result[value[I]][value[J]] = get_char_from_list(begin_list, *count);
		++*count;
	}
}
