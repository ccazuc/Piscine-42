/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:34:22 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 20:21:16 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_correct_value(int value, int total_length);
void	ft_putnbr(int nb, int n);

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

	max_value = 1;
	i = -1;
	while (++i < n+1)
	{
		max_value *= 10;
		ft_putchar((char)is_correct_value(i, n));
	}
	max_value--;
	i = 0;
	while (i < max_value)
	{
		printf("%d", is_correct_value(i, n));
		if (is_correct_value(i, n))
		{
			ft_putnbr(i, n);
		}
		i++;
	}	
}

int		is_correct_value(int value, int total_length)
{
	int i;
	int	j;
	
	i = 0;
	char first_char = get_n_value(value, 0, total_length);
	while (i < total_length)
		if (get_n_value(value, i, total_length) <= first_char)
			return (0);
	i = -1;
	j = -1;
	while (++i < total_length) 
	{
		j = -1;
		while (++j < total_length)
			if (i != j && get_n_value(value, j, total_length) <= get_n_value(value, i, total_length))
				return (0);
	}
	return (1);
}

int 	get_n_value(int value, int n, int total_length)
{
	int		i;
	
	i = total_length + 1;
	while (--i > n)
		value /= 10;
	return (value % 10);
}

void	ft_putnbr(int nb, int n)
{
	int		tmp;
	int  	length;
	int		i;

	tmp = nb;
	i = n + 1;
	while(--i)
		length *= 10;
	while (length)
	{
		ft_putchar((tmp / length) + '0');
		tmp %= length;
		length /= 10;
	}
}

int		main(void)
{
	ft_print_combn(4);
	return (0);
}
