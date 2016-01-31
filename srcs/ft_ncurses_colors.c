/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ncurses_colors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:52:40 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:38:33 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

void	ft_colors2(int nbr)
{
	if ((nbr / 64) == 1)
		attron(COLOR_PAIR(7));
	else if ((nbr / 128) == 1)
		attron(COLOR_PAIR(8));
	else if ((nbr / 256) == 1)
		attron(COLOR_PAIR(9));
	else if ((nbr / 512) == 1)
		attron(COLOR_PAIR(10));
	else if ((nbr / 1024) == 1)
		attron(COLOR_PAIR(11));
	else if ((nbr / 2048) == 1)
		attron(COLOR_PAIR(12));
	else
		attron(COLOR_PAIR(13));
}

int		ft_colors(int nbr)
{
	if (nbr == 0)
		attron(COLOR_PAIR(1));
	else if ((nbr / 2) == 1)
		attron(COLOR_PAIR(2));
	else if ((nbr / 4) == 1)
		attron(COLOR_PAIR(3));
	else if ((nbr / 8) == 1)
		attron(COLOR_PAIR(4));
	else if ((nbr / 16) == 1)
		attron(COLOR_PAIR(5));
	else if ((nbr / 32) == 1)
		attron(COLOR_PAIR(6));
	else
		ft_colors2(nbr);
	return (-1);
}

void	ft_attrof(void)
{
	int i;

	i = 0;
	while (++i < 13)
		attroff(COLOR_PAIR(i++));
}
