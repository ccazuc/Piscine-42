/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:01:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 16:03:30 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mob: %d", div, mod);
	return (0);
}
