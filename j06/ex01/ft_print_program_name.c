/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:00:51 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 14:06:17 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = -1;
	if (argc <= 0)
		return (0);
	while (argv[0][++i])
		ft_putchar(argv[0][i]);
	return (0);
}
