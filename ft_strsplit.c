/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:26:27 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 13:45:10 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

char	*save_word(char **tab, char *str, int icmm[4])
{
	int	i;

	tab[icmm[1]] = malloc(sizeof(char) * (icmm[3] - icmm[2] + 2));
	if (tab[icmm[1]] == NULL)
		return (NULL);
	i = 0;
	while (i < icmm[3] - icmm[2] + 1)
	{
		tab[icmm[1]][i] = str[icmm[2] + i];
		i++;
	}
	tab[icmm[1]][i] = '\0';
	return (tab[icmm[1]]);
}

// void	ft_split_while(int icmm[4], char *str, char **result, char *charset)
// {
// 	icmm[2] = icmm[0];
// 	while (str[icmm[0]] >= 32 && str[icmm[0]] < 127)
// 	{
// 		if (str[icmm[0] + 1] == '\0')
// 		{
// 			icmm[3] = icmm[0];
// 			icmm[0] += 1;
// 			icmm[1] += 1;
// 			save_word(result, str, icmm);
// 			break ;
// 		}
// 		icmm[0]++;
// 	}
// }
//
// /*
//  * Splits a string at a charset identifier.
//  *
//  * @param	str		string to split
//  * @param	charset	delimiter to split at
//  *
//  * @returns	array of strings that have been split
//  * @returns	if delimiter not found, whole string in
//  * 			an array of strings
//  */
// char	**ft_split(char *str, char *charset)
// {
// 	int		icmm[4];
// 	char	**result;
//
// 	icmm[0] = 0;
// 	icmm[1] = 0;
// 	result = malloc(sizeof(char *) * count_words(str, charset) + 1);
// 	if (result == NULL)
// 		return (result);
// 	while (str[icmm[0]])
// 	{
// 		if (str[icmm[0]] >= 32 && str[icmm[0]] < 127)
// 			ft_split_while(icmm, str, result, charset);
// 		icmm[0]++;
// 	}
// 	result[icmm[1]] = NULL;
// 	return (result);
// }
