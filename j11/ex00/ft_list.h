/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:01:40 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/12 18:02:26 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
