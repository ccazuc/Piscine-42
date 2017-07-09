/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:19:34 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 10:00:09 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		}
		if (stage_nb % 2 == 0 && stage_nb >= 2)
			stage_len_offset += 2;
		if (stage_nb < size - 1)
			line_len += stage_len_offset;
		stage_height++;
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
		line_len += 3;
		ft_putchar('\n');
	}
	return (0);
}

void	sastantua(int size)
{
	int		table[6];

	table[0] = -1;
	table[1] = 3;
	table[3] = 3;
	table[4] = get_total_length(size);
	table[5] = 4;
	while (++table[0] < size)
	{
		if (table[0] == size - 1 && !draw_door(table[4], table[1], size))
			return ;
		table[2] = -1;
		while (++table[2] < table[3])
		{
			draw_line(table[4], &table[1]);
			table[1] += 3;
			ft_putchar('\n');
		}
		if (table[0] % 2 == 0 && table[0] >= 2)
			table[5] += 2;
		table[1] += table[5];
		table[3]++;
	}
}

int		main(void)
{	
	sastantua(6);
	return (0);
}
