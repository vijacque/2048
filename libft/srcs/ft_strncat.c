/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:20:32 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:22:50 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t k;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[k] && k != n)
		s1[i++] = s2[k++];
	s1[i] = '\0';
	return (s1);
}
