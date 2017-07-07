/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:54:51 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:54:52 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	if (str == NULL)
		return str;
	i = - 1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'W')
			str[i] += 32;
	return (str);
}

int		main(void)
{
	char	s1[] = "BIJIDAJSIEHAAAJSAN";

	printf("%s", ft_strlowcase(s1));
	return (0);
}
