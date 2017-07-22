/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:06:14 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 15:59:24 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "solve.h"
#include "check_dim.h"

void	check_colle(char **tab)
{
	int		value[3];

	value[WIDTH] = get_width(tab);
	value[HEIGHT] = get_height(tab);
	value[FOUND] = 0;
	parse_colle(tab, "0oooo-|", value);
	parse_colle(tab, "1/\\/\\/**", value);
	parse_colle(tab, "2AACCBB", value);
	parse_colle(tab, "3ACACBB", value);
	parse_colle(tab, "4ACCABB", value);
	if (!tab[FOUND])
		ft_putstr("aucune");
}

char	check_char(char **tab, char *pattern, int *value, int *coord)
{
	int		i;
	int		j;

	i = coord[0];
	j = coord[1];
	if (i == 0 && j == 0 && tab[i][j] != pattern[1])
		return (0);
	if (i == 0 && j == value[WIDTH] - 1 && tab[i][j] != pattern[2])
		return (0);
	if (i == value[HEIGHT] && j == 0 && tab[i][j] != pattern[3])
		return (0);
	if (i == value[HEIGHT] && j == value[WIDTH] - 1 && tab[i][j] != pattern[4])
		return (0);
	if ((i == 1 || i == value[HEIGHT]) && j > 1 && j < value[WIDTH] - 1 && tab[i][j] != pattern[5])
		return (0);
	if ((j == 0 || j == value[WIDTH] - 1) && i > 1 && i < value[WIDTH] && tab[i][j] != pattern[6])
		return (0);
	if (j == value[WIDTH] && j != '\n')
		return (0);
	return (1);
}

char	parse_colle(char **tab, char *pattern, int *value)
{
	int		coord[2];

	coord[0] = -1;
	while (tab[++coord[0]])
	{
		coord[1] = -1;
		while (tab[coord[0]][++coord[1]])
			if (!check_char(tab, pattern, value, coord))
				return (0);
	}
	value[FOUND] = 1;
	return (1);	
}

void	print_colle(int colle, char found)
{
	
}

