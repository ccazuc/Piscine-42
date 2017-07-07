/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:41:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:49:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_lower(char c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

int		ft_str_is_lowercase(char *str)
{
	int		i;

	if (str == NULL)
		return (0);
	i = -1;
	while (str[++i])
		if (!is_lower(str[i]))
			return (0);
	return (1);
}

int		main(void)
{
	char	str[] = "aaaaaijsKdaij";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
