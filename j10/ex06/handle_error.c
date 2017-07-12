/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:12:05 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 13:44:48 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_str.h"

void	handle_divide_error(void)
{
	ft_putstr("Stop : division by zero\n");
}

void	handle_modulo_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
}

void	handle_wrong_ope_error(void)
{
	ft_putchar('0');
	ft_putchar('\n');
}