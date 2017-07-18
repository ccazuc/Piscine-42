/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:04:00 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 17:40:14 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_ARGS_H
# define PARSE_ARGS_H

int		parse_params(int argc, char **argv, int *value_in_c);
int		check_args(char *bin_name, char *args, int *args_value, int *value_in_c);
void	wrong_option(char *params, char *bin_name, char print_value);
void	option_wrong_value(char *param, char *bin_name, int offset);
int		check_args_value(int *args_value, char *args, int offset);

#endif
