/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:51:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 14:38:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_len;

	dest_len = ft_strlen(dest);
	i = - 1;
	while(src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char	str1[] = "Ceci est \0                   ";
	char	str2[] = "un test.";
	printf("%s\n", strcat(str1, str2));
	printf("%s", ft_strcat(str1, str2));
	return (0);
}
