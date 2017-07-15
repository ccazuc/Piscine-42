/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:18:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 18:33:15 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_grid.h"
#include "parser.h"
#include "print_result.h"
#include "solve.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	**result;
	long		nb_res;

	if (argc != 10)
	{
		print_error();
		return (0);
	}
	result = parse_grid(argc, argv);
	if (result == NULL)
	{
		print_error();
		return (0);
	}
	nb_res = recur_case(result, 0, 0);
	printf("nb: %ld\n", nb_res);
	if (nb_res == 1)
		print_result(result);
	return (0);
}
