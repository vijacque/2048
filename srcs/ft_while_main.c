/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_while_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:16:06 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:33:28 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

void		ft_while_main(int tab[4][4])
{
	int c;

	while ((c = getch()))
	{
		if (c == 27)
			break ;
		if (c == KEY_RIGHT)
			ft_down(tab);
		if (c == KEY_LEFT)
			ft_up(tab);
		if (c == KEY_UP)
			ft_left(tab);
		if (c == KEY_DOWN)
			ft_right(tab);
		if (!can_move(tab))
		{
			refresh();
			clear();
			printw("Can't move mother fucker");
			getch();
		}
		ft_aff_square(tab);
		if (!ft_aff_square(tab))
			printw("Window too small.\nThat's what she said.");
	}
}
