/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:51:26 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 16:16:07 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct	s_map
{
	char		**tab;
	int			nb_row;
	int			row_len;
	char		c_empty;
	char		c_bloc;
	char		c_full;
}				t_map;

#endif
