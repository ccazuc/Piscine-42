/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:31:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 18:57:21 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
//	if (power == 0 || power == 1)
	return (nb * ft_recursive_power(nb, power - 1));	
}

int		main(void)
{
	int		nb;
	int		power;

	nb = 2;
	power = 12;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
