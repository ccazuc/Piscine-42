/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:06:14 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 15:33:44 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	check_colle(char **tab)
{
	int		tab[3];

	tab[WIDTH] = get_width(tab);
	tab[HEIGHT] = get_height(tab);
	tab[FOUND] = 0;
	parse_colle(tab, "oooo-|", 0, tab);
	parse_colle(tab, "/\\/\\/**", 1, tab);
	parse_colle(tab, "AACCBB", 2, tab);
	parse_colle(tab, "ACACBB", 3, tab);
	parse_colle(tab, "ACCABB", 4, tab);
	if (!tab[FOUND])
		ft_putstr("aucune");
}


char	parse_colle(char **tab, char *pattern, int colle, int *value)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			if (i == 0 && j == 0 && tab[i][j] != pattern[0])
				return (0);
			if (i == 0 && j == value[WIDTH] && tab[i][j] != pattern[1])
				return (0);
			if (i == value[HEIGHT] && j == 0 && tab[i][j] != pattern[2])
				return (0);
			if (i == value[HEIGHT] && j == value[WIDTH] && tab[i][j] != pattern[3])
				return (0);
			if ((i == 1 || i == value[HEIGHT]) && j > 1 && j < value[WIDTH] && tab[i][j] != pattern[4])
				return (0);
	}
	return (1);	
}

void	print_colle(int colle, char found)
{
	
}

