/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:52:30 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/10 12:30:25 by ccazuc           ###   ########.fr       */
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

char	*ft_concat_params(int argc, char** argv)
{
	int		i;
	int		j;
	int		tot_len;
	char	*result;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		//printf("debug1\n");
		while (argv[i][++j])
			;//printf("%c\n", argv[i][j]);
	}
	tot_len = i + j;
	result = malloc(tot_len * sizeof(*result));
	i = 0;
	printf("debug\n");
	while (argv[++i])
	{
	//	printf("debug1");
		j = -1;
		while (argv[i][++j])
		{
			result[i + j] = argv[i][j];
			printf("result: %c", result[i + j]);
		}
		//printf("debug2");
		result [i + j] = '\n';
	}
	result[i + j] = 0;
	i = 1;
	while (result[++i])
		ft_putchar(i);
	return (result);
}

int		main(int argc, char **argv)
{

	ft_putstr(ft_concat_params(argc, argv));
	//ft_concat_params(argc, argv);
	return (0);
}
