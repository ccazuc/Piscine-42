/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 19:13:04 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_value(char *table)
{
	if (!(table[0] == '0' && table[1] == '0' && table[2] == '0' && table[3] == '0'))
	{
		ft_putchar(table[0]);
		ft_putchar(table[1]);
		ft_putchar(' ');
		ft_putchar(table[2]);
		ft_putchar(table[3]);
		if (!(table[0] == '9' && table[1] == '8' && table[2] == '9' && table[3] == '9'))
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
			ft_print_value(table);
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
		while (table[1] <= '9')
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
