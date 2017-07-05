/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:02 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 12:11:38 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb2()
{
	char i;
	char j;
	char k;
	int l;
	char bol;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	while(i <= '9')
	{
		j = '0';
		while(j <= '8')
		{
			k = '0';
			//l = j+1;
			k = i;
			while(k <= '9')
			{
				l = '0';
				if(bol == 1)
				{
					bol = 0;
					l = j+1;
					k = i;
				}	
				while(l <= '9')
				{
					if(!(i == '0' && j == '0' && k == '0' && l == '0'))
					{
						ft_putchar(i);
						ft_putchar(j);
						ft_putchar(' ');
						ft_putchar(k);
						ft_putchar(l);
						if(!(i == '9' && j == '8' && k == '9' && l == '9'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
					l++;
				}
				k++;	
			}
			bol = 1;
			j++;
		}
		i++;
	}
}

int 	main()
{
	ft_print_comb2();
	return (0);
}
	
