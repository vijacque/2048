#include "2048.h"

void	ft_t_array_del(int ***m)
{
	int		**ar;
	int		i;

	ar = *m;
	i = 0;
	while (i < 4)
	{
		free(ar[i]);
		ar[i] = NULL;
		i++;
	}
	free(ar);
	ar = NULL;
}
