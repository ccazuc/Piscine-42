/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:15:48 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/22 12:17:21 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#ifndef LIST_UTILS_H
# define LIST_UTILS_H

t_list	create_elem(data);
void	list_push_back(t_list *begin_list, char data);

#endif
