/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:51:04 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/11 11:14:44 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	 ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(**range));
	i = 0;
	while (min < max - 1)
	{
		tab[i] = min;
		++i;
		++min;
	}
	range = &tab;
	return (i);
}

int		main(void)
{
	int		**tab;
	int		i;
	int		size;

	i = 2;
	tab = NULL;
	size = ft_ultimate_range(tab, -5, 10);
	i = 2;
	printf("size: %d\n", size);
	while (++i < size)
		printf("i: %d, nb: %d\n", i, *tab[i]);
	return (0);
}
