/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_types.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:58 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 08:25:58 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_TYPES_H
# define H_TYPES_H

typedef struct s_coords
{
	int	x;
	int	y;
}				t_coords;
typedef struct s_map
{
	t_coords	coords;
	char		**map;
	char		epty;
	char		obst;
	char		full;
}				t_map;
typedef enum e_bool
{
	false,
	true
}				t_bool;

#endif
