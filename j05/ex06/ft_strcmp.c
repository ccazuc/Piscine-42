/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:14:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 11:46:43 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = - 1;
	while (s1[++i] && s2[i])
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	if (s2[i])
		return (- s2[i]);
	if (s1[i])
		return (s1[i]);
	return (0);
}

int		main(void)
{
	char	s1[] = "bla";
	char	s2[] = "b";
	int		result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
	result = strcmp(s1, s2);
	printf("%d", result);
	return (0);
}
