/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:43:52 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 10:10:03 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

#include <stdio.h>

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
		return (0);
	return (strs_size(strs + 1) + 1);
}

/*
 * Checks if the map is correct by calculating
 * the square root of the whole map.
 * Additionally sets a pointer to an int to the
 * length and width of the map for later use.
 *
 * @param	str		map
 * @param	coords	lengths of x and y of the map
 *
 * @returns	true or false
 */
t_bool	bsq_map_valid(char **strs, t_coords *coords)
{
	int	i;

	coords->y = ft_atoi(strs[0]);
	if (strs_size(strs) - 1 != coords->y)
		return (false);
	coords->x = ft_strlen(strs[1]);
	i = 1;
	while (i < coords->y)
	{
		if (ft_strlen(strs[i]) != coords->x)
			return (false);
		i++;
	}
	return (true);
}

/*
 * Gets the metadata from a map array of strings.
 *
 * @param	strs	array of strings
 *
 * @returns	t_map map
 */
t_map	*bsq_map_read_meta(char **strs, t_coords coords)
{
	t_map		*final;
	int			i;

	strs++;
	i = 0;
	while ((strs[0][i++]));
	final = malloc(sizeof(t_map));
	final->map = strs;
	final->coords = coords;
	final->epty = strs[0][i];
	final->obst = strs[0][i];
	final->full = strs[0][i];
	return (final);
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
	t_coords		coords;
	t_map		*final;
	char		**strs;
	char		*str;

	str = (char *)ft_file_read(fname, fsize);
	if (str == NULL)
		return (NULL);
	strs = ft_strsplit(str, '\n');
	free(str);
	if (!bsq_map_valid(strs, &coords))
		return (NULL);
	final = bsq_map_read_meta(strs, coords);
	return (final);
}
