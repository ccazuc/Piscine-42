/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:21:55 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 16:09:06 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H
# define WIDTH 0
# define HEIGHT 1
# define FOUND 2

void	check_colle(char **tab);
char	parse_colle(char **tab, char *pattern, int *value);
void	print_colle(char colle, int *value);

#endif
