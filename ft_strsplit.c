/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:26:27 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 16:04:27 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Splits a string at a character.
 * @see ft_strjoin
 *
 * @param	s	string to split
 * @param	c	delimiter
 *
 * @returns	array of strings
 * @returns	if didn't find the delimiter,
 * 			array of strings with `s` inside
 */
char	**ft_strsplit(char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((ft_strcount_words_sep(s, c) + 1) * sizeof(char *));
	if (!s || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= (size_t) ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (size_t) ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_strcut(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
