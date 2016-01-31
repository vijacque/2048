/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:31:20 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:09:23 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			cbis;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	cbis = c;
	while (i < n)
	{
		if (((char *)s)[i] == cbis)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
