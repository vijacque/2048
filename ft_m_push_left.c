#include "2048.h"

int	ft_m_push_left(int ***m)
{
	int x;
	int y;
	int yy;
	int ret;

	ret = 0;
	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 3)
		{
			if ((*m)[x][y] == 0)
			{
				yy = y + 1;
				while (yy < 3 && (*m)[x][yy] == 0)
					yy++;
				if ((*m)[x][y] != (*m)[x][yy])
					ret = 1;
				(*m)[x][y] = (*m)[x][yy];
				(*m)[x][yy] = 0;
			}
		}
	}
	return (ret);
}
