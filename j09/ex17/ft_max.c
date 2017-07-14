/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:32:36 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 14:37:15 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max(int *tab, int length)
{
	int		i;
	int		max;

	i = -1;
	while (++i < length)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}

int		main(void)
{
	int		tab[6];

	tab[0] = -5;
	tab[1] = 7;
	tab[2] = 3;
	tab[3] = 9;
	tab[4] = 0;
	tab[5] = 3;
	printf("%d", ft_max(tab, 6));
}
