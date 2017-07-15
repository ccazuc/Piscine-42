/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:05:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 18:18:06 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_case.h"
#include <stdio.h>

char	check_case_value(char nb)
{
	return (nb != '.' && (nb < '0' || nb > '9') ? 0 : 1);
}

char	check_size(char **tab)
{
	int		i;
	int		j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			++j;
		if (j != 9)
		{
			printf("wrong size: %d:%d", i, j);
			return (0);
		}
		++i;
	}
	return (i == 10 ? 1 : 0);
}

char	check_numbers(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[++j])
		{
			if (!check_column(tab, i, j, tab[i][j])
					|| !check_row(tab, i, j, tab[i][j])
					|| !check_block(tab, i, j, tab[i][j])
					|| !check_case_value(tab[i][j]))
			{
				printf("%d:%d\n", i, j);
				return (0);
			}
		}
	}
	return (1);
}
