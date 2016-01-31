/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:26:24 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:24:54 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;

	i = 0;
	if ((str = (char *)malloc(size + 1)))
	{
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
