/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_types.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:58 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 14:47:26 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_TYPES_H
# define H_TYPES_H

typedef enum e_map_val
{
	epty,
	obst
}				t_map_val;
typedef struct s_map
{
	t_map_val	**map;
	int			len;
}				t_map;
typedef enum e_bool
{
	false,
	true
}				t_bool;

#endif