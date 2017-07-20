/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:27:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/20 12:59:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "print_files.h"
#include "handle_error.h"
#include "handle_stdin.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	print_files(int argc, char **argv, int char_nb, int value_in_c)
{
	int		multiple_files;

	multiple_files = (argc > 4 - value_in_c ? 1 : 0);
	if (argc == 2)
		read_stdin(char_nb, value_in_c);
	else if (multiple_files)
		print_multiple_files(argc, argv, 3 - value_in_c, char_nb);
	else
		print_single_file(argv, 3 - value_in_c, char_nb);
}

void	print_multiple_files(int argc, char **argv, int start, int char_nb)
{
	while (start < argc)
	{
		print_file_header(argv[start]);
		print_single_file(argv, start, char_nb);
		start++;
	}
}

void	print_single_file(char **argv, int index, int char_nb)
{
	char	buffer[1000];
	char	*result;
	int		i;
	int		fd;
	long	len[2];

	len[TOT_LEN] = 0;
	fd = open(argv[index], O_RDONLY);
	if (fd == -1)
	{
		handle_error(argv[0], argv[index], errno);
		return ;
	}
	while ((len[READ_LEN] = read(fd, buffer, 1000)) > 0)
		len[TOT_LEN] += len[READ_LEN];
	i = (len[TOT_LEN] - char_nb - 1 > 0 ? len[TOT_LEN] - char_nb - 1 : -1);
	if (!(result = malloc((len[TOT_LEN] + 1) * sizeof(*result))))
		return ;
	close(fd);
	open(argv[index], O_RDONLY);
	read(fd, result, len[TOT_LEN]);
	while (++i < len[TOT_LEN])
		ft_putchar(result[i]);
	free(result);
}

void	print_file_header(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");
}
