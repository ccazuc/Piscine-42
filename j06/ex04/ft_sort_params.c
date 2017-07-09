/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:08:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 18:23:43 by ccazuc           ###   ########.fr       */
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

	i = - 1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (s2[i])
		return (- s2[i]);
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

int		main(int argc, char **argv)
{
	int		i;
	char	*tab[argc - 1];
	
	i = 0;
	while (++i < argc)
		tab[i] = argv[i];
	sort_table(tab);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
	return (0);
}
