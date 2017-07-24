/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:35:46 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 19:19:12 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "map.h"
#include "str.h"
#include "ft_atoi.h"
#include "handle_algo.h"
#include "check_map.h"
#include "solve.h"
#include "print_result.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	execute_algo(char *file_name)
{
	int			fd;
	t_map		*map;
	t_result	*result;
	//int		i;
	//int		j;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		return ;
	}
	close(fd);
	if (!(map = malloc(1 * sizeof(*map))))
		return ;
	map->tab = parse_file(file_name);
	fill_map(map);
	/*i = -1;
	while (map->tab[++i])
	{
		j = -1;
		while (map->tab[i][++j])
			printf("%c", map->tab[i][j]);
	}*/
	check_map_valid(*map);
	result = solve(*map);
	//printf("x: %d, y: %d, width: %d\n", result->x, result->y, result->width);
	print_result(map, result);
}

void	fill_map(t_map *map)
{
	int		str_len;

	str_len = ft_strlen(map->tab[0]);
	//printf("%s\n", map->tab[0]);
	if (str_len <= 4)
	{
		printf("map_error str_len: %d\n", str_len);
		map_error();
		return ;
	}
	map->nb_row = ft_atoi(ft_strndup(map->tab[0], str_len - 3));
	if (map->nb_row <= 0)
	{
		printf("map_error nb_row: %d\n", map->nb_row);
		map_error();
		return ;
	}
	map->c_empty = map->tab[0][str_len - 4];
	map->c_bloc = map->tab[0][str_len - 3];
	map->c_full = map->tab[0][str_len - 2];
	//printf("nb_row: %d, empty: %c, bloc: %c, full: %c\n", map->nb_row, map->c_empty, map->c_bloc, map->c_full);	
}

void	check_map_valid(t_map map)
{
	int		row_len;

	if (!(row_len = check_row_len(map)))
	{
		printf("map_error in check_row_len\n");
		map_error();
		return ;
	}
	map.row_len = row_len;
	if (!check_row_value(map))
	{
		printf("map_error in check_row_value\n");
		map_error();
		return ;
	}
}
