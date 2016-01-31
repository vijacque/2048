/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 18:22:44 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:08:10 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

/*
** doite
*/

int		move_down(int tab[4][4])
{
	int	vrai;
	int y;
	int i;
	int move;

	vrai = 0;
	move = 1;
	while (move && (y = -1))
	{
		move = 0;
		while (++y < 4 && (i = -1))
		{
			while (++i < 4)
			{
				if (tab[y][i] != 0 && i + 1 < 4 && tab[y][i + 1] == 0)
				{
					tab[y][i + 1] = tab[y][i];
					tab[y][i] = 0;
					move = 1;
					vrai = 1;
				}
			}
		}
	}
	return (vrai);
}
