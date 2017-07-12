/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:26:16 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 14:49:11 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_params.h"
#include "handle_calc.h"
#include "handle_error.h"
#include <stdio.h>

void	init_function_table(calc_func *table)
{
	table[0] = &handle_add;
	table[1] = &handle_sub;
	table[2] = &handle_mul;
	table[3] = &handle_div;
	table[4] = &handle_mod;
}

void	handle_do_op(char *expr1, char *expr2, char *expr3)
{
	int			value1;
	int			value2;
	char		operator;
	calc_func	table[5];

	value1 = get_number(expr1);
	value2 = get_number(expr3);
	operator = parse_operator(expr2);
	if (operator == -1)
	{
		handle_wrong_ope_error();
		return ;
	}		
	init_function_table(table);
	(table[operator])(value1, value2);
}
