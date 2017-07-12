/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:38:27 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 10:57:08 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char	**ft_split_white_spaces(char *str);

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*result;
	int		i;

	result = malloc(ft_strlen(str) * sizeof(*str));
	i = -1;
	while (str[++i])
		result[i] = str[i];
	result[i] = '\0';
	return (result);
}

t_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	stock = malloc((ac + 1) * sizeof(*stock));
	i = -1;
	while (++i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_white_spaces(av[i]);
	}
	stock[i].str = 0;
	return (stock);
}
