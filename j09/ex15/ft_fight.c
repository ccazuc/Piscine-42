/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:35:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/14 15:55:55 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include "ft_fight.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}
void	ft_fight(t_perso *char1, t_perso *char2, t_attack attack)
{
	if (char1->life == 0 && char2->life == 0)
		return ;
	ft_putstr(char1->name);
	ft_putstr(" does a ");
	ft_putstr(attack.name);
	ft_putstr(" on ");
	ft_putstr(char2->name);
	ft_putstr("\n");
	char2->life -= attack.damage;
	if (char2->life <= 0)
	{
		ft_putstr(char2->name);
		ft_putstr(" is dead\n");
	}
}

int		main(void)
{
	t_attack	judo_kick;
	t_attack	judo_punch;
	t_attack	headbutt;
	t_perso		nicolas_bauer;
	t_perso		anastacia;

	judo_kick = (t_attack) {.damage = 15, .name = "judo kick"};
	judo_punch = (t_attack) {.damage = 5, .name = "judo punch"};
	headbutt = (t_attack) {.damage = 20, .name = "headbutt"};
	nicolas_bauer = (t_perso) {.name = "Nicolas Bauer", .life = 100.0};
   	anastacia = (t_perso) {.name = "Anastacia", .life = 100.0};
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	ft_fight(&anastacia, &nicolas_bauer, HEADBUTT);	
	return (0);
}
