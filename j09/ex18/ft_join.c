/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:42:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 14:55:18 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char **tab)
{
	int		i;
	int		j;
	int		result;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[++j])
			++result;
		++result;		
	}
	return (i > 1 ? result + i - 2 : result);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		length;
	int		res_i;
	char	*result;

	length = get_size(tab);
	result = malloc(length * sizeof(*result));
	i = 0;
	res_i = 0;
	while (tab[i])
	{
		j = -1;
		while (tab[i][++j])
		{
			result[res_i] = tab[i][j];
			++res_i;
		}
		++i;
		if (tab[i])
			result[res_i] = 
	}
}
