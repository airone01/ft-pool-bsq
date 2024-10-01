/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:53:03 by elagouch          #+#    #+#             */
/*   Updated: 2024/10/01 16:53:56 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

/*
 * Frees a pointer and returns NULL.
 *
 * @param	ptr	pointer to free
 *
 * @returns	NULL
 */
void	*free_and_null(void *ptr)
{
	free(ptr);
	return (NULL);
}
