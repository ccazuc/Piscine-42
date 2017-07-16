/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:29:32 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/16 16:25:19 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match_until_star(char *s1, char *s2, int i_s1, int i_s2);
int		match_star(char *s1, char *s2, int i_s1, int i_s2);

int		match(char *s1, char *s2)
{
	return (match_until_star(s1, s2, 0, 0));
}

int		match_until_star(char *s1, char *s2, int i_s1, int i_s2)
{
	int		i;

	i = 0;
	while (s1[i_s1 + i] && s2[i_s2 + i])
	{
		if (s2[i_s2 + i] != '*' && s2[i_s2 + i] != s1[i_s1 + i])
			return (0);
		if (s2[i_s2 + i] == '*')
		{
			while (s2[i_s2 + i] == '*')
				++i_s2;
			return (match_star(s1, s2, i_s1 + i, i_s2 + i));
		}
		++i;
	}
	while (s2[i_s2 + i] == '*')
		++i_s2;
	return (s1[i_s1 + i] == s2[i_s2 + i]);
}

int		match_star(char *s1, char *s2, int i_s1, int i_s2)
{
	int		i;

	i = 0;
	if (!s2[i_s2])
		return (1);
	while (s1[i_s1 + i])
	{
		if (s1[i_s1 + i] == s2[i_s2])
			return (match_until_star(s1, s2, i_s1 + i, i_s2));
		++i;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	printf("match: %d\n", match(argv[1], argv[2]));
	return (0);
}
