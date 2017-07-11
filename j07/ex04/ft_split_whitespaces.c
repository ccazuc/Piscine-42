/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/11 16:19:47 by ccazuc           ###   ########.fr       */
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
	if (i == 1)
		return (-1);
	return ((tmp == ' ' || tmp == '\n' || tmp == 9) ? nb_word : nb_word + 1);
}

void	get_n_word(char *str, char **result, const int cur_word, int *index)
{
	int		i;
	int		res_i;

	i = *index;
	while (str[++i])
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
			break ;
//	printf("n_word i: %d, index: %d, cur_word: %d\n", i, *index, cur_word);
	result[cur_word] = malloc((i - *index + 1) * sizeof(*result));
	i = *index - 1;
	res_i = 0;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
			break ;
		result[cur_word][res_i] = str[i];
		printf("n_word_res_i: %d, char: %c, curr_word: %d\n", res_i, result[cur_word][res_i], cur_word);
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
	if (tot_word == -1)
	{
		result = malloc(1 * sizeof(**result));
		result[0] = 0;
		return (result);
	}
	printf("tot_word: %d\n", tot_word);
	result = malloc((tot_word + 1) * sizeof(*result));
	cur_word = 0;
	while (str[++i] && cur_word < tot_word)
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != 9)
		{
			get_n_word(str, result, cur_word, &i);
		//	printf("ft_split_res: %s, cur_word: %d\n", result[cur_word], cur_word);
		//	printf("result0: %s\n", result[0]);
			++cur_word;
		}
	}
	result[cur_word] = 0;
	//printf("%s\n", result[0]);
	return (result);
}

int		main(void)
{
	char	*str = "  2 111  1  22 3  2 3 4 5  123456789 ";
	char	**result;
	int		i;

	result = ft_split_whitespaces(str);
	i = -1;
	while (result[++i])
		printf("%s\n", (result[i]));
	return (0);
}
