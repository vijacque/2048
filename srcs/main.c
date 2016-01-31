/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 20:12:13 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:34:01 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int			main(void)
{
	int			tab[4][4];

	initscr();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	init_pair(2, COLOR_BLACK, COLOR_GREEN);
	init_pair(3, COLOR_MAGENTA, COLOR_RED);
	init_pair(4, COLOR_BLACK, COLOR_BLUE);
	init_pair(5, COLOR_BLACK, COLOR_YELLOW);
	init_pair(6, COLOR_BLACK, COLOR_MAGENTA);
	init_pair(7, COLOR_WHITE, COLOR_BLACK);
	init_pair(8, COLOR_RED, COLOR_BLUE);
	init_pair(9, COLOR_GREEN, COLOR_BLACK);
	init_pair(10, COLOR_YELLOW, COLOR_BLACK);
	init_pair(11, COLOR_BLUE, COLOR_GREEN);
	init_pair(12, COLOR_BLACK, COLOR_MAGENTA);
	init_pair(13, COLOR_BLACK, COLOR_WHITE);
	ft_newgame(tab);
	ft_while_main(tab);
	endwin();
	return (0);
}
