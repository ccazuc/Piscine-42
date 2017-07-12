/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hande_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:50:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 17:47:06 by ccazuc           ###   ########.fr       */
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

void	print_min_value(void)
{
	ft_putstr("-2147483648");
}

void	ft_putnbr(int nb)
{
	int		tmp;
	int		length;

	if (nb == -2147483648)
	{
		print_min_value();
		return ;
	}
	length = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
	while ((tmp /= 10) > 0)
		length *= 10;
	tmp = nb;
	while (length)
	{
		ft_putchar((tmp / length) + '0');
		tmp %= length;
		length /= 10;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	if (s2[i])
		return (-s2[i]);
	if (s1[i])
		return (s1[i]);
	return (0);
}
