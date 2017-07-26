/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:35:46 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/26 17:26:54 by ccazuc           ###   ########.fr       */
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

void	ft_free(t_map *map, t_result *result)
{
	int		i;

	i = -1;
	while (map->tab[++i])
		free(map->tab[i]);
	free(map->tab);
	free(map);
	free(result);
}

void	execute_algo(char *file_name)
{
	int			fd;
	t_map		*map;
	t_result	*result;

	fd = !file_name ? 0 : open(file_name, O_RDONLY);
	if (fd == -1)
	{
		map_error();
		return ;
	}
	if (!(map = malloc(1 * sizeof(*map))))
		return ;
	if (!(map->tab = parse_file(fd)))
	{
		map_error();
		return ;
	}
	if (!fill_map(map) || !check_map_valid(map))
		return ;
	result = solve(*map);
	print_result(*map, result);
	ft_free(map, result);
}

char	fill_map(t_map *map)
{
	int		str_len;
	char	*row_len;

	str_len = ft_strlen(map->tab[0]);
	if (str_len <= 4)
	{
		map_error();
		return (0);
	}
	row_len = ft_strndup(map->tab[0], str_len - 4);
	map->nb_row = ft_atoi(row_len) + 1;
	free(row_len);
	if (map->nb_row <= 1)
	{
		map_error();
		return (0);
	}
	map->c_empty = map->tab[0][str_len - 4];
	map->c_bloc = map->tab[0][str_len - 3];
	map->c_full = map->tab[0][str_len - 2];
	return (1);
}

char	check_map_valid(t_map *map)
{
	int	row_len;

	if (!(row_len = check_row_len(*map)))
	{
		map_error();
		return (0);
	}
	map->row_len = row_len;
	if (!check_row_value(*map) || !check_nb_row(*map))
	{
		map_error();
		return (0);
	}
	if (map->c_empty == map->c_bloc || map->c_empty == map->c_full
			|| map->c_bloc == map->c_full)
	{
		map_error();
		return (0);
	}
	return (1);
}
