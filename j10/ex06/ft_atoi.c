/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:53:49 by exam              #+#    #+#             */
/*   Updated: 2017/07/12 14:26:47 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[i])
		++i;
	return (i);
}

int		start_iter(const char *str)
{
	int		i;
	char	tmp;

	if (!str)
		return (-2);
	i = - 1;
	while (str[++i])
	{
		tmp = str[i];
		if (tmp == '-')
		   return (++i);
		if (tmp >= '0' && tmp <= '9')
			return (i);
		return (-2);
	}
	return (-2);
}

int		end_iter(int i, const char *str)
{
	while (str[++i])
		if (str[i] < '0' || str [i] > '9')
			return (i);
	return (i);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		end;
	int		result;
	char	is_neg;

	is_neg = 0;
	i = start_iter(str) - 1;
	result = 0;
	if (i == -2)
		return (0);
	end = end_iter(i, str) - 1;
	if (str[i] == '-')
		is_neg = 1;
	while (++i <= end)
	{
		result = result * 10 + (str[i] - '0');
	}
	return ((is_neg == 0) ? result : -result);
}
