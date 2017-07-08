/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_star.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:47:03 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 18:31:38 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		count_start(char *str)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] == '*')
		   count++;
	return (count);	
}

int		main(void)
{	
	char str[] = "/*************************|||*************************";
	printf("%d", count_start(str));
	return (0);
}
