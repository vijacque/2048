/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:08:31 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 13:23:00 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int		ft_left(int tab[4][4])
{
	int vrai;
	int vrai2;

	vrai = 0;
	vrai2 = 0;
	vrai2 = move_left(tab);
	vrai = merge_left(tab);
	while (move_left(tab))
		vrai = 1;
	if (vrai || vrai2)
		ft_new_digit(tab);
	return (1);
}
