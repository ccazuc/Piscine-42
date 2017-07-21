/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:55:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 14:14:50 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*result;
	int		i;

	if (ac == 0)
		return (NULL);
	result = ft_create_elem(av[0]);
	i = 0;
	while (av[++i])
	{
		tmp = result;
		result = ft_create_elem(av[i]);
		result->next = tmp;
	}
	return (first); 
}
