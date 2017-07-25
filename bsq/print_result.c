/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 18:32:54 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 15:13:59 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_result.h"
#include "str.h"
#include <stdio.h>

void	print_result(t_map map, t_result *result)
{
	int		i;
	int		j;

	i = 0;
	//printf("print_result start\n");
	while (map.tab[++i])
	{
		j = -1;
		while (map.tab[i][++j])
		{
			if (i >= result->x && i < result->x + result->width &&
					j >= result->y && j < result->y + result->width)
				ft_putchar(map.c_full);
				//printf("%c", map.c_full);
			else
				//printf("%c", map.tab[i][j]);
				ft_putchar(map.tab[i][j]);
				//printf("i: %d, j: %d, res_x: %d, res_y: %d, width: %d\n", i, j, result->x, result->y, result->width);
		}
	}
	//printf("print_result end\n");
}
