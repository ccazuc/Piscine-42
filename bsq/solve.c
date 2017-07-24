/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:57:05 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 19:14:42 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "math.h"
#include <stdlib.h>
#include <stdio.h>

void	check_width(int width, int x, int y, t_result *result, t_map map)
{
	if (width > result->width)
		while (width > result->width)
		{
			if (is_valid(map, x, y, width))
			{
				result->x = x;
				result->y = y;
				result->width = width;
			}
			--width;
		}
					
}

t_result	*solve(t_map map)
{
	t_result	*result;
	int			i;
	int			j;
	int			max_width;
	int			width;
	
	if (!(result = malloc(1 * sizeof(*result))))
		return (NULL);
	i = 0;
	max_width = 0;
	width = 0;
	result->width = 0;
	while (map.tab[++i])
	{
		j = -1;
		while (map.tab[i][++j])
		{
			width = min(get_valid_width(map, i, j), get_valid_height(map, i, j));
			//printf("width: %d, i: %d, j: %d, is_valid: %d, width: %d, height: %d\n", width, i, j, is_valid(map, i, j, width), get_valid_width(map, i, j), get_valid_height(map, i, j));
			check_width(width, i, j, result, map);
		}
	}
	return (result);
}
char	is_valid(t_map map, int x, int y, int width)
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
			if (map.tab[i][j] != map.c_empty)
			{
				//printf("NOT VALID: x: %d, y: %d, i: %d, j: %d\n", x, y, i, j);
				return (0);
			}
	}
	return (1);
}

int		get_valid_width(t_map map, int x, int y)
{
	int		j;

	j = y;
	while (map.tab[x][++j])
		if (map.tab[x][j] != map.c_empty)
		   return (j - y);
	return (j - y);	
}

int		get_valid_height(t_map map, int x, int y)
{
	int		i;

	i = x;
	while (map.tab[++i])
		if (map.tab[i][y] != map.c_empty)
			return (i - x);
	return (i - x);
}	
