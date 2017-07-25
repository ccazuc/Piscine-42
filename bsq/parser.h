/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:22:03 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/25 18:44:27 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# define BUFF_LEN 512
# define NB_ROW 0
# define J 1
# define I 2
# define CUR_ROW_LEN 3
# include "ft_list.h"

char	**parse_file(int fd);
char	get_char_from_list(t_list *begin_list, long index);
void	fill_table(int table[4], char **result,
		t_list *begin_list, long *count);

#endif
