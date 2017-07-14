/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:20:58 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 14:30:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_active_bits(int value)
{
	int		count;
	int		i;

	count = 0;
	i = -1;
	while (++i < 32)
	{
		if ((value & (1 << i)) != 0)
				++count;
	}
	return (count);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_active_bits(atoi(argv[1])));
	return (0);	
}
