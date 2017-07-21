/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:35:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/21 12:48:55 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"
#include <stdio.h>

char	*get_operator(char c);

int		get_number(char *str)
{
	return (ft_atoi(str));
}

char	is_valid_operator(char c)
{
	return (c == '+' || c == '-' || c == '%' || c == '/' || c == '*');
}

char	*parse_operator(char *str)
{
	return (get_operator(str[0]));
}

char	*get_operator(char c)
{
	if (!is_valid_operator(c))
		return ("");
	if (c == '+')
		return ("+");
	if (c == '-')
		return ("-");
	if (c == '*')
		return ("*");
	if (c == '/')
		return ("/");
	if (c == '%')
		return ("%");
	return ("");
}
