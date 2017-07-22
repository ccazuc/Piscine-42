/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:22:18 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/21 13:21:59 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **argv);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

t_list	*ft_create_elem(void *data)
{
	t_list	*result;

	result = malloc(1 * sizeof(t_list));
	result->data = data;
	result->next = NULL;
	return (result);
}

void	print(t_list *list)
{
	while (list)
	{
		printf("%s\n", (char*)(list->data));
		list = list->next;
	}
}

int		main(int argc, char **argv)
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

	/*str1 = "a";
	str2 = "b";
	str3 = "c";
	str4 = "d";
	str_tab = malloc(4 * sizeof(*str_tab));
	str_tab[0] = str1;
	str_tab[1] = str2;
	str_tab[2] = str3;
	str_tab[3] = str4;*/
	printf("size: %d\n", ft_list_size(first));
	//ft_list_push_front(&first, "x");
	printf("size: %d\n", ft_list_size(first));
	ft_list_reverse(&first);
	print(first);
	return (0);
}
