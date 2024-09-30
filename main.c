/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@42>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:11:15 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/30 13:56:57 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

int	main(int argc, char **argv)
{
	t_map	*map;
	int		i;
	int		len;

	i = 1;
	while (i < argc)
	{
		len = bsq_map_file_size(argv[i]);
		if (len == -1)
		{
			ft_puterr("map error\n");
			break ;
		}
		map = bsq_map_read(argv[i], len);
		if (map == NULL)
		{
			ft_puterr("map error\n");
			break ;
		}
		i++;
	}
}
