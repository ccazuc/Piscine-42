/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:02:35 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/07 12:16:34 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9') ? 1 : 0);	
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	should_up;
	char	tmp;

	should_up  = 1;
	i = - 1;
	while (str[++i])
	{
		tmp = str[i];
		if (should_up && is_alpha(tmp))
		{	
			if(tmp >= 'a' && tmp <= 'z')
				str[i] -= 32;
			should_up = 0;
		}
		else if (!is_alpha(tmp))
			should_up = 1;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
