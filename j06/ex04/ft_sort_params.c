/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:08:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 16:36:07 by ccazuc           ###   ########.fr       */
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

void	sort_table(char *str)
{
	int		i;
	int		j;
	char	*tmp_str;

	i = -1;
	j = -1;
	while (str[++i])
	{
		j = -1;
		while (str[++j])
			if (str[j] > str[i])
			{
				*tmp_str = str[j];
				str[j] = str[i];
				str[i] = *tmp_str;
			}
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	tab[argc - 1];
	
	//ft_putstr(argv[0]);
	//ft_putstr(argv[1]);
	i = argc;
	while (--i > 0)
		tab[i] = argv[i][0];
	//sort_table(tab);
	tab[1] = argv[1][0];
	i = -1;
	ft_putstr(&argv[1][0]);
	ft_putstr(&tab[1]);
	while (++i < argc)
	{
		//ft_putstr(&tab[i]);
		ft_putchar('\n');
	}
	return (0);
}
