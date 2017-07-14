/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:47:13 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 13:20:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*to_lower(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

char	contains(char *src, char *tar)
{
	int		i;
	int		j;

	i = -1;
	while (src[++i])
	{
		j = 0;
		if ((i > 0 && src[i - 1] == ' ' && src[i] == tar[0]) || (i == 0 && src[i] == tar[0]))
		{
			while (tar[j] && src[i])
			{
				if (tar[j] != src[i])
					break ;
				++j;
				++i;
			}
			if (!src[i] || (src[i] &&  src[i] == ' '))
				return (1);
		}
	}
	return (0);
}

void	alert()
{
	write(1, "Alert!!!\n", 9);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;
	i = 0;
	while (argv[++i])
	{
		tmp = to_lower(argv[i]);
		if (contains(tmp, "president") || contains(tmp, "attack") || contains(tmp, "powers"))
			alert();
	}
	return (0);	
}
