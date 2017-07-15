/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:19:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 15:54:39 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_case.h"

void	increment_value(int *x, int *y)
{
	if (*y == 8)
	{
		*x = *x + 1;
		*y = 0;
	}
	else 
		*y = *y + 1;
}

char	recur_case(char **tab, char x, char y)
{
	char		i;

	i = '0' - 1;
	while (++i <= '9')
	   if (can_place(tab, x, y, i))
	   {
		   tab[x][y] = i;
		   increment_value(&x, &y);
		   if (recur_case(tab, x, y) == 0)
	   }
	increment_value(&x, &y);
	return (x == 8 && y == 8 ? 1 : 0);
}
