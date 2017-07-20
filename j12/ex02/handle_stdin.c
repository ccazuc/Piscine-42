/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:37:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 11:56:30 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <unistd.h>
#include <stdlib.h>

void	read_stdin(int char_nb, int value_in_c)
{
	char	*buffer;
	int		i;

	if (!(buffer = malloc((char_nb + 1) * sizeof(*buffer))))
		return ;
	while ((i = read(0, buffer, char_nb)) > 0)
		buffer[i] = '\0';
	ft_putstr(buffer);
}
