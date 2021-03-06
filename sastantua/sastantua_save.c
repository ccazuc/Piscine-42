/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:19:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/08 21:46:45 by ccazuc           ###   ########.fr       */
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

	stage_nb = -1;
	line_len = 3;
	stage_height = 3;
	stage_len_offset = 4;
	while (++stage_nb < size)
	{
		stage_line = -1;
		while (++stage_line < stage_height)
		{
				line_len += 2;
		//		printf("stage: %d, line: %d, line_len: %d\n", stage_nb, stage_line, line_len);
		}
		if (stage_nb % 2 == 0 && stage_nb >= 2)
			 stage_len_offset += 2;
		if (stage_nb < size - 1)
			line_len += stage_len_offset;
		stage_height++;
		//printf("line_len : %d, stage_nc: %d, stage_len: %d\n", line_len, stage_nb, stage_len_offset);
	}
	return (line_len - 2);
}

void	draw_line(int total_len, int *line_len)
{
	int		i;
	int		start;

	i = -1;
	start = total_len / 2 - *line_len / 2;
	*line_len = *line_len - 1;
	while (++i < total_len)
		if (i == start)
			ft_putchar('/');
		else if (i == start + *line_len)
			ft_putchar('\\');
		else if (i >= start && i <= start + *line_len)
			ft_putchar('*');
		else if (i < start)
			ft_putchar(' ');
}

void	draw_door_line(int tot_len, int *line_len, int size, int cur_line)
{
	int		door_height_offset;
	int		stag_ln;
	int		door_s;

	door_s = size % 2 == 0 ? size - 1 : size;
	door_height_offset = size % 2 == 0 ? 3 : 2;
	stag_ln = -1;
	*line_len = *line_len - 1;
	while (++stag_ln < tot_len)
		if (stag_ln == tot_len / 2 - *line_len / 2)
			ft_putchar('/');
		else if (stag_ln == tot_len / 2 - *line_len / 2 + *line_len)
			ft_putchar('\\');
		else if (cur_line == door_s / 2 + 1 + door_height_offset && stag_ln
				== tot_len / 2 + door_s / 2 - 1 && door_s > 3)
			ft_putchar('$');
		else if (stag_ln >= tot_len / 2 - door_s / 2 && stag_ln <= tot_len / 2
				+ door_s / 2)
			ft_putchar('|');
		else if (stag_ln >= tot_len / 2 - *line_len / 2 && stag_ln <= 
				tot_len / 2 - *line_len / 2 + *line_len)
			ft_putchar('*');
		else if (stag_ln < tot_len / 2 - *line_len / 2)
			ft_putchar(' ');
}

int		draw_door(int total_len, int line_len, int size)
{
	int		current_line;
	int		door_height_offset;

	current_line = 0;
	door_height_offset = size % 2 == 0 ? 3 : 2;
	while (++current_line <= size + 2)
	{
		if (current_line > door_height_offset)
			draw_door_line(total_len, &line_len, size, current_line);
		else
			draw_line(total_len, &line_len);
//		printf("door, len: %d, line_len: %d\n", current_line, line_len);
		line_len += 3;
		ft_putchar('\n');
	}
//	printf("door: %d\n", line_len);
	return (0);
}

void	sastantua(int size)
{
	int		stage_nb;
	int		line_len;
	int		stage_line;
	int		stage_height;
	int		total_len;
	int		stag_len_off;

	total_len = get_total_length(size);
	stage_nb = -1;
	stage_height = 3;
	line_len = 3;
	stag_len_off = 4;
	while (++stage_nb < size)
	{
		if (stage_nb == size - 1 && !draw_door(total_len, line_len, size))
			return ;
		stage_line = -1;
		while (++stage_line < stage_height)
		{
			draw_line(total_len, &line_len);
			line_len += 3;
			ft_putchar('\n');
//			printf("stage: %d, line: %d, line_len: %d\n", stage_nb, stage_line, line_len);
		}
		if (stage_nb % 2 == 0 && stage_nb >= 2)
			stag_len_off += 2;
		line_len += stag_len_off;
		stage_height++;
	//	printf("line_len:  %d, stage_nb: %d, stag_of: %d\n", line_len, stage_nb, stag_len_off);
	}
}

int		main(void)
{
	int		size;

	size = 7;
	sastantua(size);
	return (0);
}
