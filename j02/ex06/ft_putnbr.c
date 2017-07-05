/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 17:35:22 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_min_value(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
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

int		main(void)
{
	ft_putnbr(-0);
	return (0);
}
