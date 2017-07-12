/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:25:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 15:29:13 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = - 1;
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s2[i])
			return (-s2[i]);
		if (s1[i])
			return (s1[i]);
	return (0);
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[++j])
			if (cmp(tab[i], tab[j]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
	}
}

int		main(void)
{
	char	**tab;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		i;

	str1 = "abcd";
	str2 = "bcd";
	str3 = "aac";
	str4 = "bac";
	tab = malloc(5 * sizeof(*tab));
	tab[0] = str1;
	tab[1] = str2;
	tab[2] = str3;
	tab[3] = str4;
	tab[4] = 0;
	ft_advanced_sort_wordtab(tab, &ft_strcmp);
	i = -1;
	while (++i < 4)
		printf("%s\n", tab[i]);
}
