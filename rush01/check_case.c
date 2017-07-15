/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 12:48:21 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 13:00:53 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_column(int **tab, int x, int y, int nb)
{
	int		j;

	j = -1;
	while (tab[x][++j])
		if (j != y && tab[x][j] == nb)
			return (0);
	return (1);
}

char	check_row(int **tab, int x, int y, int nb)
{
	int		i;

	i = -1;
	while (tab[++i])
		if (i != x && tab[i][y] == nb)
			return (0);
	return (1);
}

char	check_block(int **tab, int x, int y, int nb)
{
	int		i;
	int		max_i;
	int		j;
	int		max_j;

	i = x / 3 - 1;
	max_i = x / 3 + 3;
	max_j = y / 3 + 3;
	while (++i <= max_i)
	{
		j = y / 3 - 1;
		while (++j <= max_j)
			if (j != y && i != x && tab[i][j] == nb)
				return (0);
	}
	return (1);
}
