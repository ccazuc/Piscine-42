/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:25:25 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 19:51:50 by ccazuc           ###   ########.fr       */
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
		{
			printf("%d\n  ..", i);
			return (0);
		}
		i += 2;
	}
	return (1);
}

int		main(void)
{
	int		i;

	i = 0;
	while (++i < 100)
	{
		printf("%d: %d\n", i, ft_is_prime(i));
	}
	return (0);
}
