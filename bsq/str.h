/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:30:10 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/24 16:05:57 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

void	ft_putstr(char *str);
void	ft_putstrerr(char *str);
int		ft_strlen(char *str);
char	*ft_strndup(char *str, int n);
void	map_error(void);

#endif
