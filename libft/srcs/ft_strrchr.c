/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:31:17 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:25:41 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	if (!s)
		return (NULL);
	i = 1;
	while (s[i])
		i++;
	while (1)
	{
		if (s[i] == c)
		{
			p = &((char *)s)[i];
			return (p);
		}
		if (!i)
			break ;
		i--;
	}
	return (0);
}
