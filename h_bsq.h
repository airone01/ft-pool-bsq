/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_bsq.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:28:59 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 13:56:42 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_BSQ_H
# define H_BSQ_H

// BSQ functions
int	bsq_map_file_size(char *arg);
t_map	*bsq_map_read(char *fname, int fsize);

#endif
