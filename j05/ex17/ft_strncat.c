/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:52:40 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 15:16:00 by ccazuc           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		dest_len;

	dest_len = ft_strlen(dest);
	i = - 1;
	while(src[++i] && i < nb)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char	str1[] = "Ceci est\0                           ";
	char	str2[] = "abcdefghij";
	printf("%s\n", strncat(str1, str2, 0));
	printf("%s", ft_strncat(str1, str2, 4));
	return (0);
}
