/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:32:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 11:42:18 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 0);
}

char	is_valid_base(char *base)
{
	int		i;
	int		j;

	i = -1;
	while (base[++i])
	{
		j = -1;
		if (base[i] == '+' || base[i] == '-' || (base[i] < 32 && base[i] > 126))
				return (0);
		while (++j < i)
			if (base[i] == base [j])
				return (0);
	}
	return (i > 1 ? 1 : 0);
}

int		get_first_nb(int nbr, int base_len, int *nbr_left)
{

	if (nbr >= base_len * base_len)
	{
		*nbr_left -= (nbr / (base_len * base_len));
		return	(nbr / (base_len * base_len));
	}
	return (0);
}

int		get_nb(int *nbr_left, int base_len)
{
	int		i;
	int		nbr;

	nbr = *nbr_left;
	i = -1;
//	printf("nbr: %d, base_len: %d", nbr, base_len);
	while (++i < nbr)
		if (nbr <= base_len * i)
		{
			printf("i: %d, nbr: %d\n", i, nbr);
			*nbr_left = *nbr_left - nbr;
			return (i);
		}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_len;
	int		nbr_left;

	i = 0;
	base_len = 0;
	while (base[++i])
		base_len++;
	get_first_nb(nbr, base_len, &nbr_left);
	printf("nbr_left: %d", nbr_left);
	while (nbr_left >= base_len)
		ft_putchar(base[get_nb(&nbr_left, base_len)]);

}

int		main(void)
{
	int		nbr;
	char	base[] = "0123456789ABCDEF";
	
	nbr = 155484;
	ft_putnbr_base(nbr, base);
}
