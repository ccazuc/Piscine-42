/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:30:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 12:35:29 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = -1;
	while (factory[++i])
	{
		j = -1;
		while (factory[i][++j])
			free(factory[i][j]);
		free(factory[i]);
	}
	free(factory);
}
