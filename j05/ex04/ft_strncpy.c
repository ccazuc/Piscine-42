/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:23:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 10:39:22 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = - 1;
	while (src[++i] && (unsigned int)i < n)
		dest[i] = src[i];
	--i;
	while((unsigned int)++i < n)
		dest[i] = '\0';
	return dest;	
}

int		main(void)
{
	char	str1[] = "Ceci est un test";
	char	str2[] = "Ceci sss un tttt";
	int		n;

	n = 10;
	ft_strncpy(str2, str1, n);
	printf("1: %s, 2: %s", str1, str2);
	return (0);	
}
