/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:52:30 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/10 16:11:41 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		get_total_len(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			;
	}
	return (i + j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		tot_len;
	char	*result;
	int		cur_len;

	tot_len = get_total_len(argv);
	result = malloc(tot_len * sizeof(*result));
	i = 0;
	cur_len = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			result[cur_len] = argv[i][j];
			cur_len++;
		}
		result[cur_len] = '\n';
		cur_len++;
	}
	result[cur_len] = 0;
	return (result);
}

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
