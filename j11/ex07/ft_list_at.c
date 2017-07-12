/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:05:39 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 21:09:40 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*result;
	unsigned int		i;

	i = 0;
	while (begin_list && i < nbr)
	{
		begin_list = begin_list->next;
		++i;	
	}
	return (i == nbr ? begin_list : 0);
}
