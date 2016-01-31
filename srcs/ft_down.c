/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 18:47:47 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 13:22:35 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

/*
** droite
*/

int		ft_down(int tab[4][4])
{
	int vrai;
	int vrai2;

	vrai2 = 0;
	vrai = 0;
	vrai2 = move_down(tab);
	vrai = merge_down(tab);
	while (move_down(tab))
		vrai = 1;
	if (vrai || vrai2)
		ft_new_digit(tab);
	return (1);
}
