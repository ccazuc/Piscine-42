/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:55:10 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 17:38:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	int		tmp;
	int		length;

	length = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
	while ((tmp = (tmp / 10)) > 0)
		length *= 10;
	tmp = nb;
	while (length)
	{
		ft_putchar((tmp / length) + '0');
		tmp %= length;
		length /= 10;
	}
}
