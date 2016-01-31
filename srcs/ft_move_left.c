/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 18:25:54 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:23:46 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int		move_left(int tab[4][4])
{
	int i;
	int j;
	int	k;
	int vrai;

	vrai = 0;
	j = -1;
	while (++j < 4 && (i = -1))
	{
		while (++i < 4)
		{
			if (tab[i][j] == 0)
			{
				k = i;
				while (tab[k][j] == 0 && k < 4)
					k++;
				if (k > 3)
					break ;
				if (tab[k][j] && (vrai = 1))
					tab[i][j] = tab[k][j];
				tab[k][j] = 0;
			}
		}
	}
	return (vrai);
}
