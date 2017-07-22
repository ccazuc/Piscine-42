/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:05:39 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/21 13:17:27 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*result;
	unsigned int		i;

	i = 0;
	result = begin_list;
	while (result && i < nbr)
	{
		result = result->next;
		++i;	
	}
	return (i == nbr ? result : NULL);
}
