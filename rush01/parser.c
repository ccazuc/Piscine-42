/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:29:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 19:25:50 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include "print_result.h"
#include <stdlib.h>

char	**fill_grid(int argc, char **tab)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	if (!(result = malloc(10 * sizeof(*tab))))
		return (NULL);
	while (++i < argc)
	{
		j = -1;
		if (!(result[i - 1] = malloc(10 * sizeof(**tab))))
			return (NULL);
		while (tab[i][++j])
			result[i - 1][j] = tab[i][j];
		tab[i][j] = 0;
	}
	tab[i] = NULL;
	return (result);
}

char	**parse_grid(int argc, char **tab)
{
	char	**result;

	if (!check_size(tab))
		return (0);
	result = fill_grid(argc, tab);
	if (result == NULL)
		return (NULL);
	if (!check_numbers(result))
		return (0);
	return (result);
}
