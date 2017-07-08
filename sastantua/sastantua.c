/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:19:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 14:51:31 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		get_total_length(int size)
{
	int		i;
	int		j;
	int		stage_len;
	int		stage_height;
	
	i = 0;
	stage_len = 3;
	stage_height = 3;
	while (++i <= size)
	{
		j = 0;
		while (++j < stage_height)
		{
			stage_len += 2;
			//printf("len: %d\n", stage_len);
		}
		stage_height++;
		if (i < size)
			stage_len += 6;
		//printf("len: %d, height: %d\n", stage_len, stage_height);
	}
	return (stage_len);
}

void	draw_line(int total_len, int line_len)
{
	int		i;
	int		start;
	
	i = -1;
	start = total_len / 2 - line_len / 2;
	line_len--;
	while (++i < total_len)
		if (i == start)
			ft_putchar('/');
		else if (i == start + line_len)
			ft_putchar(92);
		else if (i >= start && i <= start + line_len)
			ft_putchar('*');
		else 
			ft_putchar(' ');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int		stage_nb;
	int		line_len;
	int		stage_line;
	int		stage_height;
	int		total_len;
	int		stage_len_offset;
	
	total_len = get_total_length(size);
	stage_line = 0;
	stage_nb = 0;
	stage_height = 3;
	line_len = 3;
	stage_len_offset = 2;
	while (++stage_nb <= size)
	{
		stage_line = 0;
		while (++stage_line <= stage_height)
		{
			draw_line(total_len, line_len);
			line_len += 2;
		}
		line_len += (4 + (stage_height + 1) / 2);
		stage_height++;
	}
}

int		main(void)
{
	int		size;

	size = 5;
	sastantua(size);
	//printf("%d", get_total_length(size));
	return (0);
}
