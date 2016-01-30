#include "2048.h"

static void	ft_m_select_2(int ***m, int flag)
{
	int retm;
	int retp;

	if (flag == KEY_LEFT)
	{
		retm = ft_m_move_left(m);
		retp = ft_m_push_left(m);
	}
	else if (flag == KEY_RIGHT)
	{
		retm = ft_m_move_right(m);
		retp = ft_m_push_right(m);
	}
	else
	{
		retm = 0;
		retp = 0;
	}
	if (retm == 1 || retp == 1)
		ft_a_add_value(m);
}

static void	ft_m_select(int ***m, int flag)
{
	int retm;
	int retp;

	retm = 0;
	retp = 0;
	if (flag == KEY_DOWN)
	{
		retm = ft_m_move_down(m);
		retp = ft_m_push_down(m);
		if (retm == 1 || retp == 1)
			ft_a_add_value(m);
	}
	else if (flag == KEY_UP)
	{
		retm = ft_m_move_up(m);
		retp = ft_m_push_up(m);
		if (retm == 1 || retp == 1)
			ft_a_add_value(m);
	}
	else
		ft_m_select_2(m, flag);
}

int			ft_m_action(int ***m, int flag)
{
	ft_m_select(m, flag);
	if ((ft_a_blocked(m)) == 1)
		return (0);
	else
		return (ft_m_max(m));
}
