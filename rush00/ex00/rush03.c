/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:15:44 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 11:12:27 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (i == 1 && (j == 1 || j == x))
				ft_putchar('A');
			else if (i == 1 && j != 1 && j != x)
				ft_putchar('B');
			else if (i == y && (j == 1 || j == x))
				ft_putchar('C');
			else if ((i >= 1 && i <= y && (j == 1  || j == x)) ||
				(i == y && j > 1 && j < x))
			   ft_putchar('B');	
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int		main(void)
{
	rush(50, 50);
	return (0);
}
