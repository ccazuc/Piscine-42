/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:52:30 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 13:59:17 by ccazuc           ###   ########.fr       */
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

int		get_total_len(char **argv)
{
	int		i;
	int		j;
	int		tot;

	i = 0;
	tot = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			++tot;
		++tot;
	}
	return (tot);
}

char	*concat(char **argv, int tot_len, char *result, int cur_len)
{
	int		i;
	int		j;

	i = 0;
	tot_len = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			result[cur_len] = argv[i][j];
			++cur_len;
		}
		if (argv[i + 1])
			result[cur_len] = '\n';
		++cur_len;
	}
	result[cur_len - 1] = '\0';
	return (result);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		tot_len;
	char	*result;
	int		cur_len;

	(void)argc;
	tot_len = get_total_len(argv);
	if (!(result = malloc(tot_len * sizeof(*result))))
		return (NULL);
	cur_len = 0;
	return (concat(argv, tot_len, result, cur_len));
}

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
