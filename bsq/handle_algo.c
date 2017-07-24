/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:35:46 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 16:32:24 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "map.h"
#include "str.h"
#include "ft_atoi.h"
#include "handle_algo.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	execute_algo(char *file_name)
{
	int		fd;
	t_map	*map;

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
}

void	fill_map(t_map *map)
{
	int		str_len;

	str_len = ft_strlen(map->tab[0]);
	printf("%s\n", map->tab[0]);
	if (str_len <= 4)
	{
		map_error();
		return ;
	}
	map->nb_row = ft_atoi(ft_strndup(map->tab[0], str_len - 3));
	if (map <= 0)
	{
		map_error();
		return ;
	}
	map->c_empty = map->tab[0][str_len - 4];
	map->c_bloc = map->tab[0][str_len - 3];
	map->c_full = map->tab[0][str_len - 2];
	printf("nb_row: %d, empty: %c, bloc: %c, full: %c\n", map->nb_row, map->c_empty, map->c_bloc, map->c_full);	
}
