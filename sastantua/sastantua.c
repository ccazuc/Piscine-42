/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:19:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 15:23:33 by ccazuc           ###   ########.fr       */
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
	int		stage_nb;
	int		stage_line;
	int		line_len;
	int		stage_height;
	int		stage_len_offset;
	
	stage_nb = 0;
	line_len = 3;
	stage_height = 3;
	stage_len_offset = 4;
	while (++stage_nb <= size)
	{
		stage_line = 0;
		while (++stage_line <= stage_height)
		{
			line_len += 2;
			//printf("len: %d\n", stage_len);
		}
		if (stage_nb < size)
			line_len += (stage_nb % 2 == 1 ? stage_len_offset : (stage_len_offset += 2));
			stage_height++;
		//printf("len: %d, height: %d\n", stage_len, stage_height);
	}
	return (line_len);
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
			ft_putchar('\\');
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
	stage_nb = 0;
	stage_height = 3;
	line_len = 3;
	stage_len_offset = 4;
	while (++stage_nb <= size)
	{
		stage_line = 0;
		while (++stage_line <= stage_height)
		{
			draw_line(total_len, line_len);
			line_len += 2;
		}
		line_len += (stage_nb % 2 == 1 ? stage_len_offset : (stage_len_offset += 2));
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
