/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:55:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 16:20:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*result;
	int		i;

	if (ac <= 1)
		return (NULL);
	i = 0;
	while (++i < ac)
	{
		tmp = result;
		result = ft_create_elem(av[i]);
		result->next = tmp;
	}
	i = 0;
	tmp = result;
	while (++i < ac - 1)
		tmp = tmp->next;
	tmp->next = NULL;
	return (result);
}
