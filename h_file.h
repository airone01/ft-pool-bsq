/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_file.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:57:52 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/02 10:46:44 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_FILE_H
# define H_FILE_H

void	*ft_file_read(char *fname, int fsize);
void	*free_and_null(void *ptr);
void	*ft_stdin_read(int fsize);
void	free_strs(char **strs);

#endif
