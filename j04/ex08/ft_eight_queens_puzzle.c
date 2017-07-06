/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:05:41 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 20:38:22 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int     check_diagonale(int table[8][8], int x, int y)
{
	int     i;
	int     j;

	i = x;
	j = y;
	while (i-- > 0 && j++ < 8)
		if (table[i][j] == 1)
			return (0);
	i = x;
	j = y;
   	while (++i < 8 && --j > 0)
		if (table[i][j] == 1)
			return (0);
	return (1);
}

int		is_correct_pos(int table[8][8], int x, int y)
{
	int		i;
	int		j;

	i = x;
	while (--i < 8)
		if (table[i][y] == 1)
			return (0);
	j = y;
	while (--j < 8)
		if (table[x][j] == 1)
			return (0);
	i = x;
	j = y;
	while(++i < 8 && ++j < 8)
		if (table[i][j] == 1)
			return (0);
	i = x - 1;
	j = y - 1;
	while (--i > 0 && --j > 0)
		if (table[i][j] == 1)
			return (0);
	return (check_diagonale(table, x, y));	
}

int     ft_eight_aueens_puzzle(void)
{
	int     table[8][8];
	int     i;
	int     j;

    i = -1;
    j = -1;
    while (i < 8)
		while (j < 8)
            table[i][j] = 0;
}
