/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:19:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 16:34:06 by ccazuc           ###   ########.fr       */
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

char	recur_case(char **tab, char x, char y)
{
	char	i;
	int		valid_result;

	valid_result = 0;
	i = '0' - 1;
	while (++i <= '9')
	   if (can_place(tab, x, y, i))
	   {
		   tab[x][y] = i;
		   increment_value(&x, &y);
		   if (recur_case(tab, x, y) != 0)
			   valid_result++;
	   }
	increment_value(&x, &y);
	if (recur_case(tab, x, y) != 0)
		valid_result++;
	tab[x][y] = '.';
	return (valid_result);
}
