/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:18:56 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 18:25:50 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdlib.h>
#include <string.h>

int		main(int argc, char **argv)
{
	printf("%d", ABS(atoi(argv[1])));
	return (0);
}
