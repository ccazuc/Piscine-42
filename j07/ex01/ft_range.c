/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:25:07 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 20:49:39 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_abs(int nb)
{
	return (nb >= 0 ? nb : -nb);
}
int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return tab;
	tab = malloc((max - min) * 4);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		++i;
		++min;
	}
	return tab;
}

int		main(void)
{
	int		*tab;
	int		i;

	tab = ft_range(-10, -5);
	i = -1;
	while (++i < 5)
		printf("i: %d, nb: %d\n", i, tab[i]);
	return (0);
}
