/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:32:51 by vijacque          #+#    #+#             */
/*   Updated: 2015/11/25 11:54:57 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	*l;

	tab = NULL;
	j = 0;
	k = 0;
	l = &k;
	if (!s || !c)
		return (NULL);
	i = ft_count_nb_word(s, c);
	if (s)
		tab = (char **)malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	while (i--)
	{
		tab[j] = ft_copy_word(s, l, c);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
