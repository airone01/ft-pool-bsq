/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:43:52 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 17:14:16 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Counts the size of an array of string.
 * This is assuming that the array of strings ends
 * with 0.
 * @see ft_strsplit.c
 *
 * @param	strs	array of strings
 *
 * @returns	size
 */
int	strs_size(char **strs)
{
	if (*strs == 0)
		return (1);
	return (strs_size(strs + 1) + 1);
}

/*
 * Checks if the map is correct by calculating
 * the square root of the whole map.
 * Additionally sets a pointer to an int to the
 * length of the map for later use.
 *
 * TODO: PATCH THIS THING
 *
 * @param	str	map
 * @param	len	pointer to an int
 *
 * @returns	true or false
 */
t_bool	bsq_map_valid(char **strs, int *len)
{
	int	i;

	i = 0;
	*len = strs_size(strs);
	while (i < *len)
	{
		if (ft_strlen(strs[i]) != *len)
			return (false);
		i++;
	}
	return (true);
}

t_map_val	**init_map(int len)
{
	t_map_val	**map;
	int			i;
	int			j;

	map = (t_map_val **)malloc(len * sizeof(t_map_val *));
	i = 0;
	while (i < len)
	{
		map[i] = (t_map_val *)malloc(len * sizeof(t_map_val));
		j = 0;
		while (j < len)
		{
			map[i][j] = epty;
			j++;
		}
		i++;
	}
	return (map);
}

/*
 * Converts an array of strings to
 * an array of t_map_val.
 *
 * @param	strs	array of strings
 *
 * @returns	the map
 * @returns	NULL if a character (and hence, the map) was invalid
 */
t_map_val	**strs_to_map(char **strs, int len)
{
	t_map_val	**map;
	int			i;
	int			j;

	map = init_map(len);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (strs[i][j] != 'o' && strs[i][j] != '.')
				// TODO: Handle potential leak here
				return (NULL);
			if (strs[i][j] == 'o')
				map[i][j] = obst;
			j++;
		}
		i++;
	}
	return (map);
}

/*
 * Reads a map from a file name.
 *
 * @param	fname	file name
 * @param	fsize	file size
 *
 * @returns	allocated map with data
 * @returns	null if error
 */
t_map	*bsq_map_read(char *fname, int fsize)
{
	t_map_val	**map;
	t_map		*final;
	char		**strs;
	char		*str;
	int			len;

	str = (char *)ft_file_read(fname, fsize);
	if (str == NULL)
		return (NULL);
	strs = ft_strsplit(str, '\n');
	free(str);
	if (!bsq_map_valid(strs, &len))
		return (NULL);
	map = strs_to_map(strs, len);
	free(strs);
	final = malloc(sizeof(t_map));
	final->map = map;
	final->len = len;
	return (final);
}
