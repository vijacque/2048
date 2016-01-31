/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:15:07 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:26:20 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int			move_right(int tab[4][4])
{
	int i;
	int j;
	int	k;
	int vrai;

	vrai = 0;
	j = 4;
	while (--j >= 0 && (i = 4))
	{
		while (--i >= 0)
		{
			if (tab[i][j] == 0)
			{
				k = i;
				while (tab[k][j] == 0 && k >= 0)
					k--;
				if (k < 0)
					break ;
				if (tab[k][j] && (vrai = 1))
					tab[i][j] = tab[k][j];
				tab[k][j] = 0;
			}
		}
	}
	return (vrai);
}
