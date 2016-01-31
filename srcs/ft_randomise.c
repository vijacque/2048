/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randomise.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:15:44 by abary             #+#    #+#             */
/*   Updated: 2016/01/31 14:31:44 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

static int		*ft_init(int a, int b)
{
	int size;
	int *result;
	int i;

	size = b - a;
	result = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		result[i] = i + a;
		i++;
	}
	free(result);
	return (result);
}

static int		rand_a_b(int a, int b)
{
	return (rand() % (b - a) + a);
}

static void		ft_suffle(int *tab, int ssize)
{
	int i;
	int num;
	int temp;

	i = 0;
	num = 0;
	temp = 0;
	while (i < ssize)
	{
		num = rand_a_b(0, ssize);
		temp = tab[i];
		tab[i] = tab[num];
		tab[num] = temp;
		i++;
	}
}

int				ft_randomize(void)
{
	int a;
	int b;
	int *t;

	a = 0;
	b = 4;
	t = NULL;
	t = ft_init(a, b);
	ft_suffle(t, b - a);
	return (t[0]);
}
