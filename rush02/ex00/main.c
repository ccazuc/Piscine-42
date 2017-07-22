/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:02:08 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 16:38:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "parser.h"
#include "solve.h"

int		main(void)
{
	char	**result;
	int		i;
	int		j;

	result = parse_stdin();
	check_colle(result);
	/*i = -1;
	while (result[++i])
	{
		j = -1;
		while (result[i][++j])
			ft_putchar(result[i][j]);
	}*/
	ft_putchar('\n');
	return (0);	
}
