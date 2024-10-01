/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_map_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:45:25 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 10:14:44 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Displays a map on STDOUT.
 *
 * @param	map	the map to display
 */
void	bsq_map_put(t_map map)
{
	int	i;

	i = 0;
	while (i < map.coords.y)
	{
		ft_putstr(map.map[i]);
		ft_putstr("\n");
		i++;
	}
}
