/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_calc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:33:13 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 17:25:49 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_error.h"
#include "handle_str.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	if (b == 0)
	{
		handle_divide_error();
		return ;
	}
	ft_putnbr(a / b);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	if (b == 0)
	{
		handle_modulo_error();
		return ;
	}
	ft_putnbr(a % b);
	ft_putchar('\n');
}
