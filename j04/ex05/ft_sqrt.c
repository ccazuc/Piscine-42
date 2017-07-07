/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:15:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:48:27 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;
	
	if (nb == 1)
		return (1);
	i = -1;
	while (++i < 46342)
		if(i * i == nb)
			return (i);
	return (0);
}

int		main(void)
{
	int		sqrt;

	sqrt = 2147483647;
	printf("%d", ft_sqrt(sqrt));
	return (0);
}
