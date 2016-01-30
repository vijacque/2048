#include "2048.h"

static int	ft_zero_grid(int ***m)
{
	int ret;
	int x;
	int y;

	x = 0;
	ret = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if ((*m)[x][y] == 0)
				ret++;
			y++;
		}
		x++;
	}
	return (ret);
}

static int	ft_a_check_last(int ***m)
{
	int x;
	int y;

	x = 3;
	y = 0;
	while (y < 3)
	{
		if ((*m)[x][y] == (*m)[x][y + 1])
			return (0);
		y++;
	}
	x = 0;
	y = 3;
	while (x < 3)
	{
		if ((*m)[x][y] == (*m)[x + 1][y])
			return (0);
		x++;
	}
	return (1);
}

int			ft_a_blocked(int ***m)
{
	int i;
	int j;

	i = 0;
	if ((ft_zero_grid(m)) != 0)
		return (0);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if ((*m)[i][j] == (*m)[i + 1][j])
				return (0);
			if ((*m)[i][j] == (*m)[i][j + 1])
				return (0);
			j++;
		}
		i++;
	}
	if ((ft_a_check_last(m)) == 0)
		return (0);
	return (1);
}
