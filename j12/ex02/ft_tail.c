/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:22:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 14:19:41 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_args.h"
#include "print_files.h"

int		main(int argc, char **argv)
{
	int		args_value;
	int		value_in_c;

	value_in_c = 0;
	args_value = parse_params(argc, argv, &value_in_c);
	if (!args_value)
		return (0);
	print_files(argc, argv, args_value, value_in_c);
	return (0);
}
