/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:26:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 16:33:19 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ret;
	size_t			i;
	size_t			j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	ret = j + (size < i ? size : i);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ret);
}

int		main(void)
{
	char	str1[] = "  i              \0              ";
	char	str2[] = "Ceci ai cd ef gh ";
	char	str3[] = "  i              \0              ";
	printf("%lu\n", strlcat(str1, str2, 20));
	printf("%s\n", str1);
	printf("%s\n\n\n\n", str2);
	printf("%u\n", ft_strlcat(str3, str2, 20));
	printf("%s\n", str3);
	printf("%s\n", str2);
}
