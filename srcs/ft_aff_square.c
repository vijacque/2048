/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:13:23 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:58:08 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

static	void	ft_header(int x)
{
	mvprintw(0, x / 2, "-");
}
static	void	ft_offset(int *sty, int *stx)
{
	while (*sty % 4)
		--*sty;
	while (*stx % 4)
		--*stx;
	*sty -= 4;
	*stx -= 4;
	ft_header(*stx);
}

int				ft_aff_square(int tab[4][4])
{
	t_printnb st;

	getmaxyx(stdscr, st.y, st.x);
	clear();
	if ((st.y < 15) || (st.x < 15))
		return (0);
	ft_offset(&st.y, &st.x);
	st.ya = 0;
	while (st.ya <= st.y * SSIZE)
	{
		st.xa = 0;
		while (++st.xa < (st.x * SSIZE))
			mvprintw(st.ya, st.xa, "-");
		st.ya += ((st.y * SSIZE) * 0.25);
	}
	st.xa = 0;
	while (st.xa <= (st.x * SSIZE))
	{
		st.ya = -1;
		while (++st.ya <= (st.y * SSIZE))
			mvprintw(st.ya, st.xa, "|");
		st.xa += ((st.x * SSIZE) * 0.25);
	}
	ft_back_to_normal(tab);
	return (1);
}
