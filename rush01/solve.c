/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:19:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 18:35:42 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_case.h"

void	increment_value(char *x, char *y)
{
	if (*y == 8)
	{
		*x = *x + 1;
		*y = 0;
	}
	else 
		*y = *y + 1;
}

void	decrement_value(char *x, char *y)
{
	if (*y == 0)
	{
		*x = *x - 1;
		*y = 8;
	}
	else
		*y = *y - 1;
}

long	recur_case(char **tab, char x, char y)
{
	char	i;
	long	valid_result;

	if (x == 8 && y == 8)
		return (1);
	if (tab[x][y] != '.')
	{
		increment_value(&x, &y);
		return (recur_case(tab, x, y));
	}
	valid_result = 0;
	i = '1' - 1;
	while (++i <= '9')
	   if (can_place(tab, x, y, i))
	   {
			tab[x][y] = i;
			increment_value(&x, &y);
			valid_result += recur_case(tab, x, y);
			decrement_value(&x, &y);
	   }
	tab[x][y] = '.';
	return (valid_result);
}
