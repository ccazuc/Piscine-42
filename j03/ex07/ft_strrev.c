/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:40:39 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 16:14:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	if (str == NULL)
		return (0);
	len = 0;
	i = 0;
	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int		main(void)
{
	char str[] = "abcdefgh";
	ft_strrev(str);
	puts(str);
	return (0);
}
