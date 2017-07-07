/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:57:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 16:17:41 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	is_valid_str(char *str)
{
	if (str == NULL)
		return (0);
	return (1);
}

int		ft_get_ini_pos(char *str)
{
	int		i;
	char	tmp;
	int		length;

	if (str == NULL)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	length = i;
	i = -1;
	while (str[++i])
	{
		tmp = str[i];
		if (tmp >= '0' && tmp <= '9')
			return (i);
		if (tmp == '-' && i < length - 1
				&& str[i + 1] >= '0' && str[i + 1] <= '9')
			return (i);
	}
	return (-1);
}

int		get_end_pos(int i, char *str)
{
	char	tmp;
	int		start;

	start = i;
	while (str[++i])
	{
		tmp = str[i];
		if (tmp < '0' || tmp > '9')
			return (i--);
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	char	tmp;
	int		result;
	char	is_neg;
	char	length;

	result = 0;
	i = ft_get_ini_pos(str);
	printf("%d", i);
	if (i == -1)
		return (0);
	length = get_end_pos(i, str);
	if (length == i)
		return (0);
	is_neg = str[i] == '-';
	while (str[i])
	{
		tmp = str[i];
		if (tmp >= '0' && tmp <= '9')
			result = result * 10 + (tmp - '0');
		i++;
	}
	return (is_neg == 0 ? result : -result);
}

int		main(void)
{
	char str[] = "   -14748367";

	printf("c: %d, self: %d", atoi(str), ft_atoi(str));
	return (0);
}
