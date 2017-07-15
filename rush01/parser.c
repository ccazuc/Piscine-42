/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:29:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 14:51:52 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include "print_result.h"
#include <stdio.h>
#include <stdlib.h>

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
	result = malloc(81 * sizeof(**tab));
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (tab[i][++j])
			result[i - 1][j] = tab[i][j];
	}
	if (!check_numbers(result))
	{
		print_error();
		return (0);
	}
	return (result);
}
