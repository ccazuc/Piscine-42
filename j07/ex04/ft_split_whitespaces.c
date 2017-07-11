/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/11 15:24:49 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		get_nb_word(char *str)
{
	int		i;
	int		nb_word;
	int		last_word;
	char	tmp;

	i = -1;
	tmp = str[0];
	last_word = (tmp == ' ' || tmp == '\n' || tmp == 9) ? 0 : 1;
	printf("last: %d, %c\n", last_word, str[0]);
	nb_word = 0;
	while (str[++i])
	{
		tmp = str[i];
		if ((tmp == ' ' || tmp == '\n' || tmp == 9) && !last_word)
			continue ;
		if ((tmp == ' ' || tmp == '\n' || tmp == 9) && last_word)
		{
			nb_word++;
			last_word = 0;
		}
		else
			last_word = 1;
	}
	return ((tmp == ' ' || tmp == '\n' || tmp == 9) ? nb_word : nb_word + 1);
}

void	get_n_word(char *str, char **result, const int cur_word, int *index)
{
	int		len;
	int		i;
	int		res_i;

	i = *index;
	while (str[++i])
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
			break ;
	printf("n_word i: %d, index: %d\n", i, *index);
	result[cur_word] = malloc((i - *index + 1) * sizeof(*result));
	i = *index - 1;
	res_i = 0;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
			break ;
		result[cur_word][res_i] = str[i];
		printf("n_word_res_i: %d, char: %c\n", res_i, result[cur_word][res_i]);
		++res_i;
	}
	result[cur_word][res_i] = 0;
	*index = i;
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		tot_word;
	int		cur_word;
	char	**result;

	i = -1;
	tot_word = get_nb_word(str);
	//printf("ft_split_start: %d\n", tot_word);
	result = malloc((tot_word) * sizeof(**result));
	cur_word = 0;
	printf("ft_split_loop_start\n");
	while (str[++i] && cur_word < tot_word)
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != 9)
		{
			get_n_word(str, result, cur_word, &i);
			printf("ft_split_res: %s, cur_word: %d\n", result[cur_word], cur_word);
			++cur_word;
		}
	}
	result[tot_word++] = NULL;
	printf("ft_split_end\n");
	return (result);
}

int		main(void)
{
	char	*str = "      111 22 3";
	char	**result;
	int		i;

	result = ft_split_whitespaces(str);
	i = -1;
	while (result[++i])
		printf("%s\n", (result[i]));
	return (0);
}
