/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:18:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 16:09:35 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include "parser.h"
#include "print_result.h"

int		main(int argc, char **argv)
{
	if (argc != 10)
	{
		print_error();
		return (0);
	}
	parse_grid(argc, argv);
	return (0);
}
