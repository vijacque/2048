/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:09:38 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:32:42 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int		ft_right(int tab[4][4])
{
	int vrai;
	int vrai2;

	vrai = 0;
	vrai2 = 0;
	vrai2 = move_right(tab);
	vrai = merge_right(tab);
	while (move_right(tab))
		vrai = 1;
	if (vrai || vrai2)
		ft_new_digit(tab);
	return (1);
}
