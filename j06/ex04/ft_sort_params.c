/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:08:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 19:45:04 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (s2[i])
		return (-s2[i]);
	if (s1[i])
		return (s1[i]);
	return (0);
}

void	sort_table(char **str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (str[++i])
	{
		j = 0;
		while (str[++j])
			if (ft_strcmp(str[j], str[i]) > 0)
			{
				tmp = str[j];
				str[j] = str[i];
				str[i] = tmp;
			}
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*tab[argc - 1];

	i = 0;
	while (++i < argc && argv[i])
		tab[i] = argv[i];
	tab[i] = argv[i];
	sort_table(tab);
	i = 0;
	while (tab[++i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argc, argv);
	return (0);
}
