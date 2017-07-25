/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:35:46 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 16:11:35 by ccazuc           ###   ########.fr       */
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

	if (!file_name)
		fd = 0;
	else
		fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		return ;
	}
	if (!(map = malloc(1 * sizeof(*map))))
		return ;
	map->tab = parse_file(fd);
	if (!fill_map(map))
		return ;
	if (!check_map_valid(*map))
		return ;
	result = solve(*map);
	print_result(*map, result);
	free(map->tab);
	free(map);
	free(result);
}

char	fill_map(t_map *map)
{
	int		str_len;

	str_len = ft_strlen(map->tab[0]);
	if (str_len < 4)
	{
		printf("map_error str_len: %d\n", str_len);
		map_error();
		return (0);
	}
	map->nb_row = ft_atoi(ft_strndup(map->tab[0], str_len - 3));
	if (map->nb_row <= 0)
	{
		printf("map_error nb_row: %ld\n", map->nb_row);
		map_error();
		return (0);
	}
	map->c_empty = map->tab[0][str_len - 4];
	map->c_bloc = map->tab[0][str_len - 3];
	map->c_full = map->tab[0][str_len - 2];
	return (1);
}

char	check_map_valid(t_map map)
{
	long	row_len;

	if (!(row_len = check_row_len(map)))
	{
		printf("map_error in check_row_len\n");
		map_error();
		return (0);
	}
	map.row_len = row_len;
	if (!check_row_value(map))
	{
		printf("map_error in check_row_value\n");
		map_error();
		return (0);
	}
	return (1);
}
