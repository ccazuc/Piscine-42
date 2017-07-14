/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:55:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 14:59:58 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		get_amount(int *tab, int length, int nb)
{
	int		i;
	int		count;

	count = 0;
	i = -1;
	while (++i < length)
		if (tab[i] == nb)
			++count;
	return (count);
}

int		ft_unmatch(int *tab, int length)
{
	int		i;

	i = -1;
	while (++i < length)
		if (get_amount(tab, length, tab[i]) % 2 == 1)
			return (tab[i]);
	return (0);
}

int		main(void)
{
	int		tab[] = {1, 1, 2, 3, 4, 3, 4};
	printf("%d", ft_unmatch(tab, 9));
	return (0);
}
