/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:27:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 16:31:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "print_files.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

extern int	errno;

void	print_files(int argc, char **argv, int char_nb, int value_in_c)
{
	int		multiple_files;

	printf("Start print_files\n");
	multiple_files = (argc > 4 - value_in_c ? 1 : 0);
	if (multiple_files)
		print_multiple_files(argc, argv, 3 - value_in_c, char_nb);
	else
		print_single_file(argv[3 - value_in_c], char_nb);
	printf("multiple_files value: %d, index: %d, char_nb: %d\n", multiple_files, 3 - value_in_c, char_nb);
}

void	print_multiple_files(int argc, char **argv, int start, int char_nb)
{
	while (start < argc)
	{
		print_file_header(argv[start]);
		print_single_file(argv[start], char_nb);
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
		return ;
	while ((len[READ_LEN] = read(fd, buffer, 1000)) > 0)
		len[TOT_LEN] += len[READ_LEN];
	i = (len[TOT_LEN] - char_nb - 1 > 0 ? len[TOT_LEN] - char_nb - 1 : -1);
	printf("i: %d\n", i);
	result = malloc((len[TOT_LEN] + 1) * sizeof(*result));
	close(fd);
	open(file_name, O_RDONLY);
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
