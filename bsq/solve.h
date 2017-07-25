/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:57:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 16:12:28 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H
# include "map.h"

typedef struct	s_result
{
	int			x;
	int			y;
	int			width;
}				t_result;

t_result		*solve(t_map map);
int				get_valid_width(t_map map, int x, int y);
int				get_valid_height(t_map map, int x, int y);
char			is_valid(t_map map, int x, int y, int width);

#endif
