/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:55:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 19:12:02 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*next;
	t_list	*first;
	int		i;

	if (ac == 0)
		return NULL;
	first = ft_create_elem(av[0]);
	i = 0;
	while (av[++i])
	{
		*list = ft_create_elem(av[i]);
		*next = *first->next;
		*first->next = *list;
		*list->next = *next;	
	}
	return (first); 
}
