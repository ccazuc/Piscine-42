/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_calc.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:35:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 18:00:02 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_CALC_H
# define HANDLE_CALC_H

void	handle_add(int a, int b);
void	handle_sub(int a, int b);
void	handle_mul(int a, int b);
void	handle_mod(int a, int b);
void	handle_div(int a, int b);
typedef void(*t_calc_func)(int, int);

#endif
