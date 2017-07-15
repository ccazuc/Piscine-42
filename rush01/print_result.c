/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:45:26 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 18:57:41 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	print_result(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
		{
			ft_putchar(tab[i][j]);
			if (j != 8)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	print_error(void)
{
	ft_putstr("Error\n");
}
