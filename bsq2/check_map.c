/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:15:23 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 20:17:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int		check_row_len(t_map map)
{
	int		i;
	int		j;
	long	last_row_len;

	i = 0;
	last_row_len = 0;
	while (map.tab[++i])
	{
		j = 0;
		while (map.tab[i][j])
			++j;
		if (last_row_len != 0 && j - 1 != last_row_len)
			return (0);
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
		{
			if (j == map.row_len && map.tab[i][j] != '\n')
				return (0);
			if (j <= map.row_len - 1 && map.tab[i][j] != map.c_empty &&
					map.tab[i][j] != map.c_bloc && map.tab[i][j] != map.c_full)
				return (0);
			if (j <= map.row_len - 1 && map.tab[i][j] == map.c_full)
				return (0);
		}
	}
	return (1);
}

char	check_nb_row(t_map map)
{
	int		i;

	i = 0;
	while (map.tab[i])
		++i;
	return (i == map.nb_row ? 1 : 0);
}
