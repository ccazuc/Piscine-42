/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:15:46 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 11:19:06 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int		i;
	int		j;
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			if (f(tab[i][j]) == 1)
				return (1);
	}
	return (0);
}