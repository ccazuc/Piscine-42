/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:48:13 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 14:01:08 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next_tab(char **tab, int length, int i)
{
	while (++i < length)
		if (tab[i])
			return (i);
	return (-1);
}

int		get_length(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		++i;
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (++i < length)
	{
		if (!tab[i])
		{	
			j = find_next_tab(tab, length, i);
			if (j)
				return (get_length(tab));
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
		}		
	}
	return (get_length(tab));
}

int		main(void)
{
	char	*tab[5];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "A";
	str2 = "";
	str3 = "c";
	str4 = "";
	tab[0] = str1;
	tab[1] = str2;
	tab[2] = str3;
	tab[3] = str4;
	tab[4] = "";
	printf("%d", ft_compact(tab, 4));
	return (0);
}
