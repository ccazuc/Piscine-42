/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:49:50 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:53:21 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_numeric(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int		ft_ftr_is_numeric(char	*str)
{
	int		i;

	if (str == NULL)
		return (0);
	i = -1;
	while (str[++i])
		if (!is_numeric(str[i]))
			return (0);
	return (1);
}

int		main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
