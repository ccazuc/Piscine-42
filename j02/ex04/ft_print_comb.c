/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 10:54:08 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while(i <= '7')
	{
		j = i+1;
		while(j <= '8')
		{
			k = j+1;
			while(k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if(!(i == '7' && j == '8' && k == '9'))
				{	
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;	
			}
			j++;
		}
		i++;
	}
}

int 	main()
{
	ft_is_negative(-1);
	return (0);
}
	
