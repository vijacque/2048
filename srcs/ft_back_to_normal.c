/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back_to_normal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:13:53 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 13:21:22 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

static void	ft_offset(int *sty, int *stx)
{
	while (*sty % 4)
		--*sty;
	while (*stx % 4)
		--*stx;
	*sty -= 4;
	*stx -= 4;
}

static void	ft_print_colors(int y, int x, int ty, int tx)
{
	int ycolors;
	int xcolors;
	int xcolorsmax;
	int ycolorsmax;

	ycolors = y - ty / 8;
	xcolors = x + tx / 8 + 1;
	xcolorsmax = xcolors + tx / 4 - 1;
	ycolorsmax = ycolors + ty / 4 - 1;
	while (ycolors < ycolorsmax)
	{
		xcolors = x + tx / 8 + 1;
		while (xcolors < xcolorsmax)
		{
			mvprintw(ycolors, xcolors, " ");
			++xcolors;
		}
		++ycolors;
	}
	ft_attrof();
}

static void	printnb(int tab[4][4], t_printnb st)
{
	getmaxyx(stdscr, st.y, st.x);
	st.i = -1;
	st.ya = ((st.y * SSIZE) / 8);
	ft_offset(&st.y, &st.x);
	while ((st.ya < (st.y * SSIZE)) && ++st.i < 4 && (st.j = -1))
	{
		st.xa = -((st.x * SSIZE) / 8);
		while ((st.xa < (st.x * SSIZE) - (st.x / 4)) && ++st.j < 4)
		{
			if (tab[st.i][st.j] == WIN_VALUE)
				mvprintw(st.y / 2, st.x / 2, "YOU WIN !");
			if (tab[st.i][st.j] > 0 && ft_colors(tab[st.i][st.j]))
			{
				ft_print_colors(st.ya, st.xa, st.y, st.x);
				st.xa += st.x / 4;
				mvprintw(st.ya, st.xa, ft_itoa(tab[st.i][st.j]));
			}
			else if (ft_colors(tab[st.i][st.j]))
			{
				ft_print_colors(st.ya, st.xa, st.y, st.x);
				st.xa += st.x / 4;
			}
		}
		st.ya += ((st.y * SSIZE) / 4);
	}
}

void		ft_back_to_normal(int tab[4][4])
{
	t_printnb st;

	keypad(stdscr, true);
	printnb(tab, st);
	move(0, 0);
	refresh();
}
