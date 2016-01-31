/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:15:26 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:31:14 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

void	ft_newgame(int tab[4][4])
{
	int			i;
	int			j;

	j = 0;
	i = 0;
	srand(time(NULL));
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			tab[i][j++] = 0;
		i++;
	}
	ft_new_digit(tab);
	ft_new_digit(tab);
	ft_aff_square(tab);
}
