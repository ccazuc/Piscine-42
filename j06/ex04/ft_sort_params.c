/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:08:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/09 17:20:58 by ccazuc           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = - 1;
	while (s1[++i] && s2[i])
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	if (s2[i])
		return (- s2[i]);
	if (s1[i])
		return (s1[i]);
	return (0);
}

void	sort_table(char **str, int len)
{
	int		i;
	int		j;
	char	*tmp[len];

	i = -1;
	j = -1;
	while (str[++i])
	{
		j = -1;
		while (str[++j])
			if (ft_strcmp(str[j], str[i]) > 0)
			{
				tmp[j] = str[j];
				str[j] = str[i];
				str[i] = tmp[j];
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
	sort_table(tab, argc - 1);
	//tab[1][0] = argv[1][0];
	i = -1;
	while (++i < argc)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
	return (0);
}
