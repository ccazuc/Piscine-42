/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:05:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 13:15:52 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_case.h"

char	check_size(int **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			++j;
		if (j != 9)
			return (0);
		++i;
	}
	return (i == 9 ? 1 : 0);
}

char	check_numbers(int **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[++j])
		{
			if (!check_column(tab, i, j, tab[i][j]) || !check_row(tab, i, j, tab[i][j])
					|| check_block(tab, i, j, tab[i][j]))
				return (0);
		}
	}
	return (1);
}
