/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:53:56 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 10:53:57 by ccazuc           ###   ########.fr       */
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
	char c;

	c = c >= 0 ? 'P' : 'N';
	ft_putchar(c);
}

int 	main()
{
	ft_is_negative(-1);
	return (0);
}
	
