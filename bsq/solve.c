/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:57:05 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 20:17:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "math.h"
#include <stdlib.h>

void		check_width(int x, int y, t_result *result, t_map map)
{
	int		width;
	int		height;
	int		total;

	width = get_valid_width(map, x, y);
	if (width <= result->width)
		return ;
	height = get_valid_height(map, x, y);
	total = min(width, height);
	while (total > result->width)
	{
		if (is_valid(map, x, y, total))
		{
			result->x = x;
			result->y = y;
			result->width = total;
			return ;
		}
		--total;
	}
}

t_result	*solve(t_map map)
{
	t_result	*result;
	int			i;
	int			j;
	long		count;

	if (!(result = malloc(1 * sizeof(*result))))
		return (NULL);
	i = 0;
	result->width = 0;
	count = 0;
	while (++i < map.nb_row - result->width)
	{
		j = -1;
		while (++j < map.row_len - result->width)
		{
			check_width(i, j, result, map);
			++count;
		}
	}
	return (result);
}

char		is_valid(t_map map, int x, int y, int width)
{
	int		i;
	int		j;
	int		i_max;
	int		j_max;

	i = x;
	i_max = x + width;
	j_max = y + width;
	while (++i < i_max && map.tab[i])
	{
		j = y;
		while (++j < j_max && map.tab[i][j])
			if (map.tab[i][j] != map.c_empty && map.tab[i][j] != map.c_full)
				return (0);
	}
	return (1);
}

int			get_valid_width(t_map map, int x, int y)
{
	int		j;

	j = y - 1;
	while (map.tab[x][++j])
		if (map.tab[x][j] != map.c_empty)
			return (j - y);
	return (j - y);
}

int			get_valid_height(t_map map, int x, int y)
{
	int		i;

	i = x;
	while (map.tab[++i])
		if (map.tab[i][y] != map.c_empty)
			return (i - x);
	return (i - x);
}
