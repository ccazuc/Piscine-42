/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:15:24 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 14:18:11 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

void	read_stdin(void)
{
	int		i;
	char	tab[1000];

	while ((i = read(0, tab, 1000)) > 0)
	{
		tab[i] = '\0';
		ft_putstr(tab);
	}
}

void	print_error(char *bin_name, char *file_name)
{
	if (errno == 2)
	{
		ft_putstr(bin_name);
		ft_putstr(": ");
		ft_putstr(file_name);
		ft_putstr(": No such file or directory\n");
	}
	if (errno == 21)
	{
		ft_putstr(bin_name);
		ft_putstr(": ");
		ft_putstr(file_name);
		ft_putstr(": Is a directory\n");
	}
	if (errno == 13)
	{
		ft_putstr(bin_name);
		ft_putstr(": ");
		ft_putstr(file_name);
		ft_putstr(": Permission denied\n");
	}
}

void	print_file(char *bin_name, char *file_name)
{
	int		fd;
	int		read_len;
	char	tab[1000];

	fd = open(file_name, O_RDWR);
	if (fd == -1)
	{
		if (file_name[0] == '-' && file_name[1] == '\0')
			read_stdin();
		else
			print_error(bin_name, file_name);
	}
	while ((read_len = read(fd, tab, 1000)) > 0)
		write(1, tab, read_len);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*bin_name;

	i = 0;
	if (argc == 1)
	{
		read_stdin();
		return (0);
	}
	bin_name = argv[0];
	while (++i < argc)
		print_file(argv[0], argv[i]);
	return (0);
}
