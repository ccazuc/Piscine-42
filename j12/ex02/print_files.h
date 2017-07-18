/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:09:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 13:59:45 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FILES_H
# define PRINT_FILES_H

void	print_files(int argc, char **argv, char char_nb, int value_in_c);
void	print_multiple_files(int argc, char **argv, int start, int char_nb);
void	print_single_file(char *file_name, int char_nb);
void	print_file_header(char *file_name);

#endif
