/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:38:58 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 14:46:11 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Frees a map.
 *
 * @param	coords	lengths of x and y of the map
 */
void	bsq_map_free(t_tile **map, t_coords coords)
{
	int		i;

	i = 0;
	while (i < coords.y)
	{
		i++;
		if (map[i - 1] == NULL)
			break ;
		free(map[i]);
	}
	free(map);
}

/*
 * Allocates and initializes a map
 *
 * @param	coords	lengths of x and y of the map
 *
 * @return	allocated map
 */
t_tile	**bsq_map_init(t_coords coords)
{
	t_tile	**map;
	int		i;
	int		j;

	map = (t_tile **)malloc(coords.y * sizeof(t_tile *));
	i = 0;
	while (i < coords.y)
	{
		map[i] = (t_tile *)malloc(coords.x * sizeof(t_tile));
		j = 0;
		while (j < coords.x)
		{
			map[i][j] = epty;
			j++;
		}
		i++;
	}
	return (map);
}
