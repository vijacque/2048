/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 18:23:44 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:33:22 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int		ft_up(int tab[4][4])
{
	int		vrai;
	int		vrai2;

	vrai = 0;
	vrai2 = 0;
	vrai2 = move_up(tab);
	vrai = merge_up(tab);
	while (move_up(tab))
	{
		vrai = 1;
	}
	if (vrai || vrai2)
		ft_new_digit(tab);
	return (1);
}
