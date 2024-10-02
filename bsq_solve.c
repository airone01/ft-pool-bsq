/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macombe <macombe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:15:31 by macombe           #+#    #+#             */
/*   Updated: 2024/10/02 19:39:11 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_main.h"

static int	min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

void	bsq_solve(t_map map)
{
	int	dp[2][1000];
	int	max_size;
	int	max_i;
	int	max_j;
	int	curr;
	int	i;
	int	j;

	max_size = 0;
	max_i = 0;
	max_j = 0;
	curr = 0;
	i = 0;
	while (i < map.coords.y)
	{
		j = 0;
		while (j < map.coords.x)
		{
			if (map.map[i][j] == epty)
				dp[curr][j] = 0;
			else if (i == 0 || j == 0)
				dp[curr][j] = 1;
			else
				dp[curr][j] = min(dp[1 - curr][j], dp[curr][j - 1], dp[1
						- curr][j - 1]) + 1;
			if (dp[curr][j] > max_size)
			{
				max_size = dp[curr][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		curr = 1 - curr;
		i++;
	}
	i = max_i;
	while (i > max_i - max_size)
	{
		j = max_j;
		while (j > max_j - max_size)
		{
			map.map[i][j] = full;
			j--;
		}
		i--;
	}
}
