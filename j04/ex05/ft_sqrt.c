/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:15:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 19:24:49 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;
	int		max_iter;
	
	if (nb == 1)
		return (1);
	i = -1;
	max_iter = nb / 2;
	while (++i < max_iter)
		if(i * i == nb)
			return (i);
	return (0);
}

int		main(void)
{
	int		sqrt;

	sqrt = 2;
	printf("%d", ft_sqrt(sqrt));
	return (0);
}
