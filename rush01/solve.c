/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:19:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 19:29:21 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_case.h"
#include "print_result.h"

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

void	decrement_value(int *x, int *y)
{
	if (*y == 0)
	{
		*x = *x - 1;
		*y = 8;
	}
	else
		*y = *y - 1;
}

void	handle_show(char **tab, long show)
{
	if (show == 1)
		print_result(tab);
}

long	recur_case(char **tab, int x, int y, long show)
{
	char	i;
	long	valid_result;

	if (x == 9 && y == 0)
	{
		handle_show(tab, show);
		return (1);
	}
	if (tab[x][y] != '.')
	{
		increment_value(&x, &y);
		return (recur_case(tab, x, y, show));
	}
	valid_result = 0;
	i = '1' - 1;
	while (++i <= '9')
		if (can_place(tab, x, y, i))
		{
			tab[x][y] = i;
			increment_value(&x, &y);
			valid_result += recur_case(tab, x, y, show);
			decrement_value(&x, &y);
		}
	tab[x][y] = '.';
	return (valid_result);
}
