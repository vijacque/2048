/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:33:36 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:10:35 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*ss1;
	unsigned const char		*ss2;

	ss1 = s1;
	ss2 = s2;
	while (n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		n--;
		ss1++;
		ss2++;
	}
	return (0);
}
