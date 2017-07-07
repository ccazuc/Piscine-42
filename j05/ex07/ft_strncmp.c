/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:56:01 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 13:01:37 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = - 1;
	while (s1[++i] && s2[i] && (unsigned int)i < n)
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	if (s2[i] && (unsigned int)i < n)
		return (- s2[i]);
	if (s1[i] && (unsigned int)i < n)
		return (s1[i]);
	return (0);
}

int		main(void)
{
	char			s1[] = "blablabla";
	char			s2[] = "blablabbb";
	int				result;
	unsigned int	n;

	n = 5;
	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	result = strncmp(s1, s2, n);
	printf("%d", result);
	return (0);
}
