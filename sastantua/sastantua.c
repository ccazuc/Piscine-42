/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:19:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 16:23:40 by ccazuc           ###   ########.fr       */
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

void	draw_door_line(int total_len, int line_len, int size, int current_line)
{
	int		door_height_offset;
	int		door_size;
	int		stage_line;
	int		poignet_y;
	int		start;

	start = total_len / 2 - line_len / 2;
	door_size = size % 2 == 0 ? size - 1 : size;
	door_height_offset = size % 2 == 0 ? 3 : 2;
	poignet_y = door_size / 2 + door_height_offset;
	stage_line = -1;
	line_len--;
	while (++stage_line < total_len)
		if (stage_line == start)
			ft_putchar('/');
		else if (stage_line == start + line_len)
			ft_putchar('\\');
		else if (current_line == door_size /2 + 1 + door_height_offset && stage_line
				== total_len / 2 + 1)
			ft_putchar('$');
		else if(stage_line >= total_len / 2 - door_size / 2 && stage_line <= total_len / 2
				+ door_size / 2)
			ft_putchar('|');
		else if(stage_line >= start && stage_line <= start + line_len)
			ft_putchar('*');
		else
			ft_putchar(' ');
	ft_putchar('\n');
}

void	draw_door(int	total_len, int	line_len, int size)
{
	int		current_line;
	int		door_height_offset;
	

	current_line = 0;
	door_height_offset = size % 2 == 0 ? 3 : 2;
	while (++current_line <= size + 2)
	{
		if (current_line > door_height_offset)
			draw_door_line(total_len, line_len, size, current_line);
		else
			draw_line(total_len, line_len);
		line_len += 2;
	}	
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
	while (++stage_nb < size)
	{
		stage_line = 0;
		while (++stage_line <= stage_height)
		{
			draw_line(total_len, line_len);
			line_len += 2;
		}
		line_len += (stage_nb % 2 == 1 ? stage_len_offset : (stage_len_offset += 2));
		stage_height++;
		if (stage_nb == size - 1)
			draw_door(total_len, line_len, size);
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
