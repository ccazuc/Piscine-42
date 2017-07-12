/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:35:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 12:10:24 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

char	is_valid_number(char *str)
{
	int		
}

int		get_number(char *str)
{
	if (!is_valid_number(str))
		return (0);
	return (atoi(str));
}

char	is_valid_operator(char c)
{
	return (c == '+' || c == '-' || c == '%' || c == '/' || c == '*');	
}

char	parse_operator(char *str)
{
	int		i;
	char	has_op;
	char	nb;
	char	result;

	i = -1;
	has_op = 0;
	while (str[++i])
		if (str[i] == '"' && !has_op)
			++nb;
		else if (str[i] == '"' && has_op)
			--nb;
		else 
		{
			result = get_operator(str[i]);
			has_op = 1;	
		}
	return (has_op == 0 ? result : -1);
}

char	get_operator(char c)
{
	if (!is_valid_operator(c))
		return (-1);
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '*')
		return (2);
}
