/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:26:27 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 17:12:14 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Splits a string (potentially multime times) at a character.
 * It will put the data of 0 to indicate the end of the string array.
 * @see ft_strjoin
 *
 * @param	str	string to split
 * @param	c	delimiter
 *
 * @returns	array of strings
 * @returns	if didn't find the delimiter,
 * 			array of strings with `s` inside
 */
char	**ft_strsplit(char *str, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (str == NULL)
		return (NULL);
	split = malloc((ft_strcount_words_sep(str, c) + 1) * sizeof(char *));
	if (!str || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= (size_t)ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == (size_t)ft_strlen(str)) && index >= 0)
		{
			split[j++] = ft_strcut(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
