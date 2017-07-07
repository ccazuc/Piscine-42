/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:51:23 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:51:57 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			 ? 1 : 0);	
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	if (str == NULL)
		return (0);
	i = -1;
	while (str[++i])
		if (!is_alpha(str[i]))
			return (0);
	return (1);
}

int		main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
