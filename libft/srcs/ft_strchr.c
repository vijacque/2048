/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:52:24 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:13:37 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	if (!s)
		return (NULL);
	i = 0;
	while (1)
	{
		if (s[i] == c)
		{
			p = &((char *)s)[i];
			return (p);
		}
		if (!s[i])
			break ;
		i++;
	}
	return (0);
}
