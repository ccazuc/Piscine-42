/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:13:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 11:15:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		*result;
	int		i;

	i = -1;
	result = malloc(length * sizeof(*tab));
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}
