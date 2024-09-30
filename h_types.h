/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_types.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:58 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 13:43:04 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_TYPES_H
# define H_TYPES_H

typedef struct s_map
{
	int	**map;
	int	len;
}		t_map;
typedef enum ft_bool
{
	false,
	true
}		t_bool;

#endif
