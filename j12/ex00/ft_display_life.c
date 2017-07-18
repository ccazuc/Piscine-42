/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 18:38:31 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/16 18:58:52 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		read_len;
	char	tab[1000];

	if (argc != 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
   fd = open(argv[1], O_RDONLY);
   if (fd == -1)
	   return (0);
	while ((read_len = read(fd, tab, 1000)) > 0)
		write(1, tab, read_len);
	return (0);
}
