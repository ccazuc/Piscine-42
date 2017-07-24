/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:22:03 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 15:40:48 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# define BUFF_LEN 512
# define NB_ROW 0
# define J 1
# define I 2
# define CUR_ROW_LEN 3

char	**parse_file(char *file_name);

#endif
