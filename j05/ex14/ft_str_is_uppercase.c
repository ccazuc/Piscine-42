/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:41:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 13:13:33 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_upper(char c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	if (str == NULL)
		return (0);
	i = -1;
	while (str[++i])
		if (!is_upper(str[i]))
			return (0);
	return (1);
}

int		main(void)
{
	char	str[] = "AADIJACNZOSDIKD";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
