/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:26:11 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 11:39:53 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	if(str == NULL)
		return (0);
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int		main(void)
{
	char *str;

	str = NULL;
	printf("self: %d", ft_strlen(str));
	// printf("self: %d, c: %lu", ft_strlen(str), strlen(str));
	return (0);
}
