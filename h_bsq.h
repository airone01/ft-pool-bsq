/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_bsq.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:28:59 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 14:46:29 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_BSQ_H
# define H_BSQ_H

// BSQ functions
t_tile	bsq_map_char_to_tile(char c, t_tiles tiles);
t_tile	**bsq_map_init(t_coords coords);
t_map	*bsq_map_read(char *fname, int fsize);
void	bsq_map_free(t_tile **map, t_coords coords);
void	bsq_map_put(t_map map);
int		bsq_map_file_size(char *arg);

#endif
