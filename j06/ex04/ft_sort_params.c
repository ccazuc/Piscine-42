/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:08:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 16:55:07 by ccazuc           ###   ########.fr       */
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

void	sort_table(char **str)
{
	int		i;
	int		j;
	char	*tmp_str;

	i = -1;
	j = -1;
	while (str[++i][0])
	{
		j = -1;
		while (str[++j][0])
			if (str[j][0] > str[i][0])
			{
				tmp_str = str[j];
				str[j] = str[i];
				str[i] = tmp_str;
			}
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab[argc - 1];
	
	i = argc;
	while (--i	> 0)
	{
			tab[i] = argv[i];
	}
	sort_table(tab);
	tab[1][0] = argv[1][0];
	i = 0;
	while (++i < argc)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
	return (0);
}
