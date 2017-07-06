/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:00:53 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 18:46:31 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if(nb < 0 || nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int		nb;

	nb = 0;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
