/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:37:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 14:20:04 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <unistd.h>
#include <stdlib.h>

void	read_stdin(int char_nb)
{
	char	*buffer;
	int		i;

	if (!(buffer = malloc((char_nb + 1) * sizeof(*buffer))))
		return ;
	while ((i = read(0, buffer, char_nb)) > 0)
		buffer[i] = '\0';
	ft_putstr(buffer);
}
