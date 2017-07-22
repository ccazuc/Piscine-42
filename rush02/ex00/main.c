/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:02:08 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 19:10:12 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "parser.h"
#include "solve.h"

int		main(void)
{
	char	**result;

	result = parse_stdin();
	check_colle(result);
	ft_putchar('\n');
	return (0);
}
