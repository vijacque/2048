/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:14:09 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 13:21:50 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			can_move(int tab[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == 0 || (j < 3 && tab[i][j] == tab[i][j + 1]) ||
						(j > 0 && tab[i][j] == tab[i][j - 1]) ||
						(i > 0 && tab[i][j] == tab[i - 1][j]) ||
						(i < 3 && tab[i][j] == tab[i + 1][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}