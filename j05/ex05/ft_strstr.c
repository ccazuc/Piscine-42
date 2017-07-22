/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:40:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 18:09:41 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		to_find_len;

	if (to_find == NULL || str == NULL)
		return NULL;
	i = 0;
	while (to_find[i])
		++i;
	if (i == 0)
		return str;
	to_find_len = i;
	i = - 1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == to_find_len - 1)
				return (str + i);
			j++;
		}
	}
	return NULL;
}

int		main(void)
{
	char	str[] = "Chaine a trouver";
	char	to_find[] = "a t";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s\n", result);
	result = strstr(str, to_find);
	printf("%s\n", result);
	
}
