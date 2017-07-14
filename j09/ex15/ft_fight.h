/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:37:29 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 15:53:31 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# define KICK kick
# define PUNCH punch
# define HEADBUTT headbutt

typedef struct 	s_attack
{
	char	*name;
	int		damage;
}				t_attack;

#endif
