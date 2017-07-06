/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:37:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 18:45:54 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;
	
	if(nb < 0 || nb > 12)
		return (0);
	i = 0;
	result = 1;
	while (++i <= nb)
		result *= i;
	return (result);
}

int		main(void)
{
	int		nb;
	
	nb = 14;
	printf("%d", ft_iterative_factorial(nb));
}
