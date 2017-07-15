/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:29:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 13:43:55 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"

char	**parse_grid(char **tab)
{
	char	**result;
	int		i;
	int		j;

	if (!check_size(tab))
		return (0);
	result = malloc(81 * sizeof(**tab));
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			result [i][j] = tab [i][j];
	}
	if (!check_numbers(result))
		return (0);
	return (result);
}
