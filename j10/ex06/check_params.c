/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:35:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 14:30:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"
#include <stdio.h>

char	get_operator(char c);

char	is_valid_number(char *str)
{
	return (1);
}

int		get_number(char *str)
{
	if (!is_valid_number(str))
		return (0);
	return (ft_atoi(str));
}

char	is_valid_operator(char c)
{
	return (c == '+' || c == '-' || c == '%' || c == '/' || c == '*');
}

char	parse_operator(char *str)
{
	return (get_operator(str[0]));
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
	if (c == '/')
		return (3);
	if (c == '%')
		return (4);
	return (-1);
}
