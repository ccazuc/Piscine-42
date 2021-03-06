/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:55:56 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 19:23:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	handle_error(char *bin_name, char *file_name, int errno)
{
	if (errno == 13)
	{
		ft_putstr(bin_name);
		ft_putstr(": ");
		ft_putstr(file_name);
		ft_putstr(": Permission denied\n");
	}
	else if (errno == 2)
	{
		ft_putstr(bin_name);
		ft_putstr(": ");
		ft_putstr(file_name);
		ft_putstr(": No such file or directory\n");
	}
}
