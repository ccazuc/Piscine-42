/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:25:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 10:13:37 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ret;
	size_t			i;
	size_t			j;
	size_t			src_len;

	i = 0;
	src_len = 0;
	while (dest[i])
		i++;
	j = -1;
	while (src[++j])
		src_len++;
	ret = j + (size < i ? size : i);
	j = 0;
	i = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len);
}

int		main(void)
{
	char	str1[] = "            \0               5   ";
	char	str2[] = "Ceci cd ef    5     .      7 ";
	char	str3[] = "  i         \0               5   "; 
	printf("%lu\n", strlcpy(str1, str2, 14));
	printf("%s\n", str1);
	printf("%s\n\n\n\n", str2);
	printf("%u\n", ft_strlcpy(str3, str2, 14));
	printf("%s\n", str3);
	printf("%s\n", str2);
}
