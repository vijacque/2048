
#include "2048.h"

int	ft_m_max(int ***m)
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
			if ((*m)[x][y] > ret)
				ret = (*m)[x][y];
			y++;
		}
		x++;
	}
	return (ret);
}
