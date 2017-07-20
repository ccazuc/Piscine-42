/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:30:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 11:46:23 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str, char offset)
{
	int		i;
	int		result;

	result = 0;
	i = offset - 1;
	if (str[offset] == '-')
		++i;
	if (!str[i + 1])
		return (-1);
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result = result * 10 + str[i] - '0';
	}
	return (result);
}
