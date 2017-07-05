/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:53:15 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 12:59:23 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char c;

	c = 'a' - 1;
	while (++c <= 'z')
	{
		ft_putchar(c);
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
