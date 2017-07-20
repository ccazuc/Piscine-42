/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:40:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 11:55:03 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "parse_args.h"
#include "handle_error_msg.h"

int		parse_params(int argc, char **argv, int *value_in_c)
{
	int		i;
	int		args_value;

	i = 0;
	args_value = -2;
	while (++i < argc)
	{
		if (i == 1 &&
				check_args(argv[0], argv[1], &args_value, value_in_c) == -1)
			return (0);
		if (i == 2 && args_value == -2 &&
				check_args_value(&args_value, argv[i], 0) == -1)
		{
			option_wrong_value(argv[i], argv[0], -1);
			return (0);
		}
	}
	if (argc <= 2 && !*value_in_c)
	{
		handle_not_enough_args(argv, 1);
		return (0);
	}
	return (args_value);
}

int		check_args_value(int *args_value, char *args, int offset)
{
	*args_value = ft_atoi(args, offset);
	return (*args_value);
}

int		check_args(char *bin_name, char *args, int *args_value, int *value_in_c)
{
	int		i;

	i = -1;
	while (args[++i])
		if ((i == 0 && args[i] != '-') || (i == 1 && args[i] != 'c'))
		{
			wrong_option(args, bin_name, 0);
			return (-1);
		}
	if (i != 2)
	{
		if (check_args_value(args_value, args, 2) == -1)
		{
			option_wrong_value(args, bin_name, 1);
			return (-1);
		}
		*value_in_c = 1;
	}
	return (1);
}

void	option_wrong_value(char *param, char *bin_name, int offset)
{
	int		i;

	i = -1;
	ft_putstr(bin_name);
	ft_putstr(": illegal offset -- ");
	while (param[++i])
		if (i > offset)
			ft_putchar(param[i]);
	ft_putchar('\n');
}

void	wrong_option(char *param, char *bin_name, char print_value)
{
	int		i;

	i = 0;
	ft_putstr(bin_name);
	ft_putstr(": illegal option -- ");
	if (print_value)
	{
		while (param[++i])
			if (i > 1)
				ft_putchar(param[i]);
	}
	else
		while (param[++i] && i < 2)
			ft_putchar(param[i]);
	ft_putchar('\n');
	ft_putstr("usage: ");
	ft_putstr(bin_name);
	ft_putstr(" [-c] [file ...]\n");
}
