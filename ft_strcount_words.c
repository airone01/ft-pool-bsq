/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount_words.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:22:37 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 13:26:39 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Counts words in a string, separated by whitespaces.
 *
 * @param	str	string
 *
 * @returns	amount of words
 */
int	ft_strcount_words(char *str)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			if (str[i + 1] == ' ')
				sum++;
			if (str[i + 1] == '\0')
				return (sum + 1);
		}
		i++;
	}
	return (sum);
}
