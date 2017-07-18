/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:40:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 13:41:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "parse_args.h"

int		parse_params(int argc, char **argv, int *value_in_c)
{
	int		i;
	int		args_value;

	i = 0;
	args_value = -2;
	while (++i < argc)
	{
		if (i == 1 && check_args(argv[0], argv[1], &args_value, value_in_c) == -1)
			return (0);
		if (i == 2 && args_value == -2 && check_args_value(argv[i]) == -1)
			return (0);
	}
	return (args_value);
}

int		check_args_value(char *args)
{
	return ft_atoi(args, 2);	
}

int		check_args(char *bin_name, char *args, int *args_value, int *value_in_c)
{
	int		i;

	i = -1;
	while (args[++i])
		if ((i == 0 && args[i] != '-') || (i == 1 && args[i] != 'c'))
		{
			wrong_option(args, bin_name);
			return (-1);
		}
	if (i != 2)
	{
		*args_value = check_args_value(args);
		*value_in_c = 1;
	}
	return (1);
}

void	wrong_option(char *param, char *bin_name)
{
	ft_putstr(bin_name);
	ft_putstr(": illegal option -- ");
	ft_putstr(param);
	ft_putchar('\n');
	ft_putstr("usage: ");
	ft_putstr(bin_name);
	ft_putstr(" [-c] [file ...]\n");
}
