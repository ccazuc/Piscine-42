/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:14:01 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 13:49:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_printable(char c)
{
	return ((c >= 32 && c <= 126) ? 1 : 0);	
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!is_printable(str[i]))
			return (0);
	return (1);	
}

int		main(void)
{
	char	str[] = "b;aifjoa\0afs";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
