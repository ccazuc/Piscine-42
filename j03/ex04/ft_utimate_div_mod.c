/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utimate_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:06:27 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 16:05:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp_div;
	int		tmp_mod;

	if (*b == 0)
		return ;
	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}

int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d", a, b);
	return (0);
}
