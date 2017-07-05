/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 16:49:04 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_value(char i, char j, char k, char l)
{
	if (!(i == '0' && j == '0' && k == '0' && l == '0'))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(' ');
		ft_putchar(k);
		ft_putchar(l);
		if (!(i == '9' && j == '8' && k == '9' && l == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_loop(char *table, char *bol)
{
	while (table[2] <= '9')
	{
		table[3] = '0';
		if (*bol == '1')
		{
			*bol = '0';
			table[3] = table[1] + 1;
			table[2] = table[0];
		}
		while (table[3] <= '9')
		{
			ft_print_value(table[0], table[1], table[2], table[3]);
			table[3]++;
		}
		table[2]++;
	}
}

void	ft_print_comb2(void)
{
	char bol;
	char table[4];

	bol = '0';
	table[0] = '0';
	table[1] = '0';
	table[2] = '0';
	table[3] = '1';
	while (table[0] <= '9')
	{
		table[1] = '0';
		while (table[1] <= '8')
		{
			table[2] = table[0];
			ft_loop(table, &bol);
			bol = '1';
			table[1]++;
		}
		table[0]++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
