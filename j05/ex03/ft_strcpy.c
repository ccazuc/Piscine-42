/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:03:12 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/10 19:57:21 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	
	i = - 1;
	while (src[++i])
		dest[i] = src[i];
	--i;
	while (dest[++i])
		dest[i] = '\0';
	return dest;
}
int		main(void)
{
	char	str1[] = "Ceci est un test";
	char 	str2[] = "bla blai iiiiiii00000000";

	ft_strcpy(str1, str2);
	printf("1: %s, 2: %s", str1, str2);
	return (0);
}
