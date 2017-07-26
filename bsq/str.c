/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:37:54 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/26 17:27:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

void	ft_putstrerr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(2, str, i);
}

int		ft_strlen(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strndup(char *str, int n)
{
	char	*result;
	int		i;

	i = -1;
	if (!(result = malloc(n * sizeof(*str))))
		return (0);
	while (str[++i] && i < n)
		result[i] = str[i];
	return (result);
}

void	map_error(void)
{
	ft_putstrerr("map error\n");
}
