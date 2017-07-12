/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:05:37 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 12:07:27 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_PARAMS_H
# define CHECK_PARAMS_H

char	is_valid_number(char *str);
int		get_number(char *str);
char	is_valid_operator(char c);
char	parse_operator(char *str);
char	get_operator(char c);

#endif
