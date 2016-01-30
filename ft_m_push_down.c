#include "2048.h"

int	ft_m_push_down(int ***m)
{
	int x;
	int y;
	int xx;
	int ret;

	ret = 0;
	y = -1;
	while (++y < 4)
	{
		x = 4;
		while (--x > 0)
		{
			if ((*m)[x][y] == 0)
			{
				xx = x - 1;
				while (xx > 0 && (*m)[xx][y] == 0)
					xx--;
				if ((*m)[x][y] != (*m)[xx][y])
					ret = 1;
				(*m)[x][y] = (*m)[xx][y];
				(*m)[xx][y] = 0;
			}
		}
	}
	return (ret);
}
