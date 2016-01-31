/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:36:36 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/15 12:10:47 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char *str;

	if (!s1 || !s2)
		return (NULL);
	str = (unsigned char*)malloc(sizeof(*str) * n);
	if (!str)
		return (NULL);
	ft_memcpy(str, s2, n);
	ft_memcpy(s1, str, n);
	free(str);
	return (s1);
}
