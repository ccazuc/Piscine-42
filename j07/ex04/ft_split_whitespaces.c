/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/10 17:05:40 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*remove_useless_char(char *str, int *len)
{
	int		i;
	int		res_i;
	char	is_corr_last;
	char	result[len];

	is_corr_last = 0;
	i = -1;
	res_i = 0;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9 && !is_corr_last)
		{
			is_correct_last = 0;
			continue ;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
			is_correct_last = 1;
		result[res_i] = str[i];
		res_i++;
	}
	*len = res_i - 1;
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		res_i;
	int		res_j;
	char	*tmp;
	char	**result;

	i = 0;
	tmp = &i;
	while (str[i])
		++i;
	tmp = remove_useless_char(stri, i);
	result = malloc(i * sizeof(**result));
	i = -1;
	res_i = 0;
	res_j = 0;
	while (tmp[++i])
	{
		result[res_j][res_i] = tm[i];
		if (tmp[i] == '' || tmp[i] == '\n' || tmp[i] == 9)
		{
			res_i = 0;
			res_j++;
		}
		res_i++;
	}
	return (result);
}
