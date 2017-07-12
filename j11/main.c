/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:22:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 19:55:09 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*result;

	result = malloc(1 * sizeof(t_list));
	result->data = data;
	result->next = NULL;
	return (result);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	while (list->next)
			list = list->next;
	return list;
}

int		main(void)
{
	t_list **tab;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;
	t_list	*fifth;
	t_list	*list;

	first = ft_create_elem("a");
	second = ft_create_elem("b");
	third = ft_create_elem("c");
	fourth = ft_create_elem("d");
	fifth = ft_create_elem("e");
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	
	tab = malloc(5 * sizeof(*tab));
	tab[0] = first;
	tab[1] = second;
	tab[2] = third;

	printf("last: %s\n", (char*)(ft_list_last(tab[0])->data));
	list = tab[0];
	while (list)
	{
		printf("%s\n", (char*)(list->data));
		list = list->next;
	}
	return (0);
}
