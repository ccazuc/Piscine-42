/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:22:01 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 13:24:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		tmp_a;
	int		tmp_b;
	int		tmp_c;
	int		tmp_d;

	tmp_a = ***a;
	tmp_b = *b;
	tmp_c = *******c;
	tmp_d = ****d;
	*******c = tmp_a;
	****d = tmp_c;
	*b = tmp_d;
	***a = tmp_b;
}
