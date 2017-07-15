/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:29:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 15:00:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include "print_result.h"
#include <stdio.h>
#include <stdlib.h>

char	**fill_grid(int argc, char **tab)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	result = malloc(9 * sizeof(*tab));
	while (++i < argc)
	{
		j = -1;
		result[i - 1] = malloc(9 * sizeof(**tab));
		while (tab[i][++j])
			result[i - 1][j] = tab[i][j];
	}
	return (result);
}
char	**parse_grid(int argc, char **tab)
{
	char	**result;
	int		i;
	int		j;

	if (!check_size(tab))
	{
		print_error();		
		return (0);
	}
	result = fill_grid(argc, tab);
	print_result(result);
	if (!check_numbers(result))
	{
		print_error();
		return (0);
	}
	return (result);
}
