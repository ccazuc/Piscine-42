/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:23:53 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 12:28:33 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_antidote(int i, int j, int k)
{
	if (i >= j && i >= k)
		return (j > k ? i : k);
	if (j >= i && j >= k)
		return (i > k ? i : k);
	if (k >= i && k >= j)
		return (i > j ? i : j);
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_antidote(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	return (0);
}
