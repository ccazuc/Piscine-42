/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:51:04 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 20:59:46 by ccazuc           ###   ########.fr       */
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
	tab = malloc((max - min) * 4);
	i = -1;
	while (min < max)
	{
		tab[i] = min;
		++i;
		++min;
	}
	*range = tab;
	return i;
}

int		main(void)
{
	int		**tab;
	int		i;
	int		size;

	size = ft_ultimate_range(tab, 0, 10);
	i = -1;
	printf("size: %d\n", size);
	while (++i < 10)
		printf("i: %d, nb: %d\n", i, *tab[i]);
	return (0);
}
