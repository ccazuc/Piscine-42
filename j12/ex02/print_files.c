/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:27:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 14:57:43 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "print_files.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	print_files(int argc, char **argv, int char_nb, int value_in_c)
{
	int		multiple_files;

	printf("print_files_start\n");
	multiple_files = (argc > 4 - value_in_c ? 1 : 0);
	printf("multiple_files: %d, value_in_c: %d, argc: %d\n", multiple_files, value_in_c, argc);
	if (multiple_files)
		print_multiple_files(argc, argv, 3 - value_in_c, char_nb);
	else
		print_single_file(argv[3 - value_in_c], char_nb);
}

void	print_multiple_files(int argc, char **argv, int start, int char_nb)
{
	printf("argc: %d, start: %d\n", argc, start);
	while (start < argc)
	{
		print_file_header(argv[start]);
		print_single_file(argv[start], char_nb);
		printf("Tried to print file %d, file_name: %s\n", start, argv[start]);
		start++;		
	}	
}

void	print_single_file(char *file_name, int char_nb)
{
	char	buffer[1000];
	char	*result;
	int		i;
	int		fd;
	long	len[2];

	len[TOT_LEN] = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		;//handle_error
	while ((len[READ_LEN] = read(fd, buffer, 1000)) > 0)
		len[TOT_LEN] += len[READ_LEN];
	i = len[TOT_LEN] - char_nb;
	result = malloc((len[TOT_LEN] + 1) * sizeof(*result));
	close(fd);
	open(file_name, O_RDONLY);
	printf("read: %zd, tot_len: %ld\n", read(fd, result, len[TOT_LEN]), len[TOT_LEN]);
	while (i < len[TOT_LEN])
	{
		ft_putchar(result[i]);
		++i;
	}
	
}

void	print_file_header(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");	
}
