/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:33:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 14:47:49 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	handle_do_op(char *expr1, char *expr2, char *expr3);

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (-1);
	handle_do_op(argv[1], argv[2], argv[3]);
	return (0);
}
