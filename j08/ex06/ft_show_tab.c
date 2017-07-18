/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:38:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 18:31:33 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(i);
}

void	ft_putnbr(int nb)
{
	int		tmp;
	int		length;

	length = 1;
	tmp = nb;
	while ((tmp = (tmp / 10)) > 0)
		length *= 10;
	tmp = nb;
	while (length)
	{
		ft_putchar((tmp / length) + '0');
		tmp %= length;
		length /= 10;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (par[++i].str != 0)
	{
		j = -1;
		while (par[i].copy[++j])
			ft_putchar(par[i].copy[j]);
		ft_putchar('\n');
		ft_putnbr(par[i].size_params);
		j = -1;
		while (par[i].tab[++j])
		{
			k = -1;
			while (par[i].tab[j][++k])
				ft_putchar(par[i].tab[j][k]);
			ft_putchar('\n');
		}
	}
}
