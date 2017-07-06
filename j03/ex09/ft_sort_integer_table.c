/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:51:39 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/06 16:19:08 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	if (tab == NULL)
		return ;
	i = -1;
	j = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (tab[j] > tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
		}
	}
	i = -1;
	while (++i < size)
		printf("value: %d\n", tab[i]);
}

int		main(void)
{
	int table[] = {5, 4, 0, -1, 800, -450, -450};
	ft_sort_integer_table(table, 7);
	return (0);
}
