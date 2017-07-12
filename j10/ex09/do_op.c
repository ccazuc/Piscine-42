/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:26:16 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 17:42:39 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_params.h"
#include "handle_calc.h"
#include "handle_error.h"
#include "handle_str.h"
#include "ft_opp.h"
#include <stdio.h>

void	handle_do_op(char *expr1, char *expr2, char *expr3)
{
	int			value1;
	int			value2;
	char		*operator;
	int			i;

	value1 = get_number(expr1);
	value2 = get_number(expr3);
	operator = parse_operator(expr2);
	i = -1;
	while (++i < 6)
		if (ft_strcmp(operator, g_opptab[i].str) == 0)
			(g_opptab[i].func(value1, value2));
	//(g_opptab[operator])(value1, value2);
}
