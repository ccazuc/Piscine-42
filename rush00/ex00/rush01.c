/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:37:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 12:06:52 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if ((i == 1 && j == 1) || (i == y && i != 1 && j == x && j != 1))
				ft_putchar('/');
			else if (i == 1 && j != 1 && j != x)
				ft_putchar('*');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar(92);
			else if ((i >= 1 && i <= y && (j == 1 || j == x)) ||
				(i == y && j > 1 && j < x))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
