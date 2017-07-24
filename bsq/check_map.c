/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:10:42 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 16:14:55 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_row_len(t_map map)
{
	int		i;
	int		j;
	int		last_row_len;

	i = -1;
	while (map.tab[++i])
	{
		j = 0;
		while (map.tab[i][j])
			++j;
		if 
		if (last_row_len != 0 && j != last_row_len)
			return (0);
		last_row_len = j;
	}
}
