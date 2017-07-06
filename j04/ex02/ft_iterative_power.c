/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:19:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 18:47:16 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int		i;
	
	if (power < 0)
		return (0);	
	i = -1;
	result = 1;
	while (++i < power)
		result*= nb;
	return (result);
}

int		main(void)
{
	int		nb;
	int		power;

	nb = 2;
	power = 0;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
