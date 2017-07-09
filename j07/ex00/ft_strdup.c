/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:16:06 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 20:34:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(*src));
	i = -1;
	while (src[++i])
		ptr[i] = src[i];
	return (ptr);
}

int		main(void)
{
	char	str[] = "Bonsoir bonsoir";
	
	printf("%s", ft_strdup(str));
	return (0);
}
