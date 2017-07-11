/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/11 11:54:24 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		get_nb_word(char *str)
{
	int		i;
	int		nb_word;
	int		last_word;
	char	tmp;


	i = -1;
	last_word = 0;
	nb_word = str[0] == (str[0] == ' ') ? 0 : 1;
	while (str[++i])
	{
		tmp = str[i];
		if ((tmp  == ' ' || tmp == '\n' || tmp == 9) && !last_word)
			continue ;
		if ((tmp == ' ' || tmp == '\n' || tmp == 9) && last_word)
		{
			nb_word++;
			last_word = 0;
		}
		else
			last_word = 1;
	}
	return (nb_word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		res_i;
	int		res_j;
	int		*tmp;
	char	**result;

	result = NULL;


	return (result);
}

int		main(void)
{
	char	*str = "         \n\n\n\nCeci\nest un test          a      \n\n\n\n  l";
	printf("%d\n", get_nb_word(str));
	return (0);
}
