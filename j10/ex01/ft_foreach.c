/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:05:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 11:12:22 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb)
{
	printf("%d", nb);
}

void	ft_foreach(int	*tab, int length, void(*f)(int))
{
	int		i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

int		main(void)
{
	int		tab[5];

	tab[0] = 2;
	tab[1] = 3;
	tab[2] = 4;
	tab[3] = 5;
	tab[4] = 5;
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
