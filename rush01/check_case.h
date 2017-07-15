/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_case.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:11:55 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/15 15:10:47 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_CASE_H
# define CHECK_CASE_H

char	check_column(char **tab, int x, int y, char nb);
char	check_row(char **tab, int x, int y, char nb);
char	check_block(char **tab, int x, int y, char nb);

#endif
