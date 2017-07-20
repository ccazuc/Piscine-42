/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error_msg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:56:07 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/19 14:03:46 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	handle_not_enough_args(char **argv, int index)
{
	ft_putstr(argv[0]);
	ft_putstr(": option requires an argument -- ");
	ft_putchar(argv[index][1]);
	ft_putchar('\n');
	ft_putstr("usage: ");
	ft_putstr(argv[0]);
	ft_putstr(" [c] [file ...]\n");
}
