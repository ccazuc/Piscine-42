/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:32:14 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 13:44:57 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define OPEN 1
# define TRUE 1
# define EXIT_SUCCESS 0

typedef struct	s_door
{
	char	state;
}				t_door;
typedef char ft_bool;

void	ft_putstr(char *str);
void	close_door(t_door *door);
void	open_door(t_door *door);
ft_bool	is_door_open(t_door *door);
ft_bool	is_door_close(t_door *door);

#endif
