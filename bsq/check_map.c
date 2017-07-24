/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:15:23 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 17:55:26 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdio.h>

char	check_row_len(t_map map)
{
	int		i;
	int		j;
	int		last_row_len;

	i = 0;
	last_row_len = 0;
	while (map.tab[++i])
	{
		j = 0;
		while (map.tab[i][j])
			++j;
		if (last_row_len != 0 && j - 1 != last_row_len)
		{
			printf("last_row_len: %d, cur_row_len: %d, i: %d\n", last_row_len, j - 1, i);
			return (0);
		}
		last_row_len = j - 1;
	}
	return (last_row_len);
}

char	check_row_value(t_map map)
{
	int		i;
	int		j;

	i = 0;
	while (map.tab[++i])
	{
		j = -1;
		while (map.tab[i][++j])
			if (j == map.row_len && map.tab[i][j] != '\n')
			{
				printf("invalid char: '%c', i: %d, j: %d, map_row_len: %d\n", map.tab[i][j], i, j, map.row_len);
				return (0);
			}
			else if (j < map.row_len - 1 && map.tab[i][j] != map.c_empty
					&& map.tab[i][j] != map.c_bloc && map.tab[i][j] != map.c_full)
			{
				printf("invalid char: '%c', i: %d, j: %d, map_row_len: %d\n", map.tab[i][j], i, j, map.row_len);
				return (0);
			}
	}
	return (1);
}	
