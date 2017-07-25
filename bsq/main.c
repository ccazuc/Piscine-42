/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:32:06 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 15:53:43 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_algo.h"

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
	{
		execute_algo(0);
		return (0);
	}
	i = 0;
	while (++i < argc)
		execute_algo(argv[i]);
	return (0);
}
