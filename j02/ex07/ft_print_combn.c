/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:34:22 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 18:37:15 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
		return ;
	int	max_value;
	int i;

	i = 0;
	max_value = get_max_value(max_value, n);
	while (i < max_value)
	{
		if (is_correct_value(i))
		{
			ft_putnbr(i);
		}

	}
	
}

char	is_correct_value(int value)
{
	int i;
	
	i = 0;
	
}

int 	get_max_value(int max_value, int n)
{
	int i;

	i = -1;
	while (++i < n + 1)
		max_value *= 10;
	return (max_value - 1);
}	
