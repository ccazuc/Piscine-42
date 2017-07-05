/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:53:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/05 13:02:29 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z' + 1;
	while (--c >= 'a')
	{
		ft_putchar(c);
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
