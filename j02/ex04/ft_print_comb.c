/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 14:02:13 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char table[3];
	table[0] = '0' - 1;
	table[1] = '1' - 1;
	table[2] = '2' - 1;
	while (table[0]++ <= '7')
	{
		table[1] = table[0] + 1;
		while (table[1]++ <= '8')
		{
			table[2] = table[1] + 1;
			while (table[2]++ <= '9')
			{
				ft_putchar(table[0]);
				ft_putchar(table[1]);
				ft_putchar(table[2]);
				if (!(table[0] == '7' && table[1] == '8' && table[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
