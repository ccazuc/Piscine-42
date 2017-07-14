/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:15:44 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/13 15:16:48 by ccazuc           ###   ########.fr       */
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

	if (x == 0 || y == 0)
		return ;
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (j == 1 && (i == 1 || i == y))
				ft_putchar('A');
			else if (i == 1 && j != 1 && j != x)
				ft_putchar('B');
			else if (j == x && (i == 1 || i == y))
				ft_putchar('C');
			else if ((i >= 1 && i <= y && (j == 1 || j == x)) ||
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
	rush(-2, 4);
	return (0);
}
