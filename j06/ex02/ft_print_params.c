/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:50:03 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 15:57:30 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}
int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
