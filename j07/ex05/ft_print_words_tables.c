/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:20:51 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/11 17:19:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
	}
}

int		main(void)
{
	char	**tab;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "Ceci ";
	str2 = "est ";
	str3 = "un ";
	str4 = "test.";
	tab[0] = str1;
	tab[1] = str2;
	tab[2] = str3;
	tab[3] = str4;
	tab[4] = 0;
	ft_print_words_tables(tab);
	return (0);
}
