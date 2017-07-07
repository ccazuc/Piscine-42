/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:39:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 09:51:46 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	
	i = - 1;
	while(str[++i])
		ft_putchar(str[i]);	
}

int		main(void)
{
	char	tab[] = "Ceci est un test";

	ft_putstr(tab);
	return (0);
}
