/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:22:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 20:59:38 by ccazuc           ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*tmp;

	if (!begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	printf("push_front");
	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*result;
	int		i;

	if (!ac)
		return NULL;
	i = 0;
	result = ft_create_elem(av[0]);
	while (++i < ac)
	{
		tmp = result;
		result = ft_create_elem(av[i]);
		result->next = tmp;
	}
	return (result);
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
	char	**str_tab;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	first = ft_create_elem("a");
	second = ft_create_elem("b");
	third = ft_create_elem("c");
	fourth = ft_create_elem("d");
	fifth = ft_create_elem("e");
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;

	str1 = "a";
	str2 = "b";
	str3 = "c";
	str4 = "d";
	str_tab = malloc(4 * sizeof(*str_tab));
	str_tab[0] = str1;
	str_tab[1] = str2;
	str_tab[2] = str3;
	str_tab[3] = str4;
	
	tab = malloc(5 * sizeof(*tab));
	tab[0] = first;
	tab[1] = second;
	tab[2] = third;

	list = ft_list_push_params(4, str_tab);
	list = ft_create_elem("a");
	//ft_list_push_front(tab, "a");
	//ft_list_push_front(tab, "b");
	ft_list_push_front(tab, "c");
	//ft_list_push_front(tab, "d");
	while (list)
	{
		printf("%s\n", (char*)(list->data));
		list = list->next;
	}
	return (0);
}
