/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:37:14 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 18:32:26 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

void			ft_putchar(char c);
typedef struct	s_stock_par
{
	int			size_params;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

#endif
