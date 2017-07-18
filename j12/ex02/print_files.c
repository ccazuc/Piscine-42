/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:27:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/18 14:14:17 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "print_files.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	print_files(int argc, char **argv, char char_nb, int value_in_c)
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
	char	**buffer;
	int		i;
	int		fd;
	int		read_len;
	
	//printf("print_single_file_start\n");
	buffer = malloc(((char_nb / 1000) + 2) * sizeof(*buffer));
	i = -1;
	while (++i < (char_nb / 1000) + 1)
		buffer[i] = malloc(1000 * sizeof(**buffer));
	buffer[i] = 0;
	fd = open(file_name, O_RDONLY);
	i = 0;
	//printf("print_single_file_middle, fd: %d\n", fd);
	while ((read_len = read(fd, buffer[i], 1000)) > 0)
	{
		buffer[i][1000] = '\0';
		write(1, buffer[i], read_len);
	}
}

void	print_file_header(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");	
}
