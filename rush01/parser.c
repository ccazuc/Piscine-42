/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:29:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 14:41:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include <stdio.h>
#include <stdlib.h>

char	**parse_grid(int argc, char **tab)
{
	char	**result;
	int		i;
	int		j;

	if (!check_size(tab))
	{
		printf("wrong size");
		return (0);
	}
	result = malloc(81 * sizeof(**tab));
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (tab[i][++j])
			result [i - 1][j] = tab [i][j];
	}
	//if (!check_numbers(result))
	//	return (0);
	return (result);
}
