/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_algo.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:24:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 20:08:12 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_ALGO_H
# define HANDLE_ALGO_H
# include "map.h"

void	execute_algo(char *file_name);
char	fill_map(t_map *map);
char	check_map_valid(t_map map);

#endif
