/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 12:48:21 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 18:59:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_column(char **tab, int x, int y, char nb)
{
	int		j;

	j = -1;
	if (nb == '.')
		return (1);
	while (tab[x][++j])
		if (j != y && tab[x][j] == nb)
			return (0);
	return (1);
}

char	check_row(char **tab, int x, int y, char nb)
{
	int		i;

	i = -1;
	if (nb == '.')
		return (1);
	while (tab[++i])
		if (i != x && tab[i][y] == nb)
			return (0);
	return (1);
}

char	check_case(char **tab, int x, int y)
{
	return (tab[x][y] == '.' ? 1 : 0);
}

char	check_block(char **tab, int x, int y, char nb)
{
	int		i;
	int		max_i;
	int		j;
	int		max_j;

	if (nb == '.')
		return (1);
	i = x - (x % 3) - 1;
	max_i = x - (x % 3) + 3;
	max_j = y - (y % 3) + 3;
	while (++i < max_i)
	{
		j = y - (y % 3) - 1;
		while (++j < max_j)
			if (j != y && i != x && tab[i][j] == nb)
				return (0);
	}
	return (1);
}

char	can_place(char **tab, int x, int y, char nb)
{
	return (check_block(tab, x, y, nb) && check_row(tab, x, y, nb)
			&& check_column(tab, x, y, nb));
}
