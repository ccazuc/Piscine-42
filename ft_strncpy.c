/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbonnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:49:04 by pbonnet           #+#    #+#             */
/*   Updated: 2017/07/26 10:37:40 by pbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	i--;
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	char	*s1 = malloc(strlen(argv[1]) + 1);
	char	*s2 = malloc(strlen(argv[1]) + 1);

	//Si le second printf est différent du 4ème, c'est que c'est pas bon, ça veut dire que t'as terminé le char* un char trop tôt
	s1[strlen(argv[1])] = '.';
	printf("'%s'\n", ft_strncpy(s1, argv[1], strlen(argv[1])));
	printf("%c\n", s1[strlen(argv[1])]);
	printf("'%s'\n", ft_strncpy(s2, argv[1], strlen(argv[1])));
	printf("%c\n", s2[strlen(argv[1])]);
	return (0);
}
