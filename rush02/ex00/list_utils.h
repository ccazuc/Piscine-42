/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 19:24:04 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_UTILS_H
# define LIST_UTILS_H

t_list	create_elem(char data);
void	list_push_back(t_list *begin_list, char data);
char	list_push_back_buffer(t_list **begin_list, char *buffer);
void	clear_list(t_list *begin_list);

#endif
