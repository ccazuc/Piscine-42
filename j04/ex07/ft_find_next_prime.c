/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:05:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 13:05:36 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;
	int		max;
	
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);	
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 7 == 0 || nb % 5 == 0)
		return (0);
	i = 11;
	max = nb / 2;
	while (i < max)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = nb - 1;
	while (++i)
		if (ft_is_prime(i))
			return (i);
	return (0);
}

int		main(void)
{
	int		nb;

	nb = 1512;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
