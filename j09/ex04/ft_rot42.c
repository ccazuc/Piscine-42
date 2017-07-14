/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:00:37 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 12:18:57 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotate(char c)
{	
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (c);
	if (c <= 'Z' - 16)
		return (c + 16);
	if (c > 'Z' - 16 && c < 'Z')
		return ('A' + 'Z' - c);
	if (c == 'Z')
		return ('A' + 15);
	if (c == 'z')
		return ('a' + 15);
	if (c <= 'z' - 16)
		return (c + 16);
	if (c > 'z' - 16 && c < 'z')
		return ('a' + 'z' - c);
	return (c);
}

char	*ft_rot42(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		str[i] = rotate(str[i]);
	return str;	
}

int		main(int argc, char **argv)
{
	printf("%s", ft_rot42(argv[1]));
	return (0);
}
