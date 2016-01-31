/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:15:17 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:31:09 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

void		ft_new_digit(int tab[4][4])
{
	int		a;
	int		b;

	a = ft_randomize();
	b = ft_randomize();
	if ((tab[a][b]) == 0)
		tab[a][b] = ft_two_or_four();
	else
		ft_new_digit(tab);
}
