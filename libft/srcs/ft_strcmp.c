/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:58:46 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/15 12:09:40 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int a;

	if (ft_strlen(s1) > ft_strlen(s2))
		a = ft_strlen(s1);
	else
		a = ft_strlen(s2);
	return (ft_memcmp(s1, s2, a));
}
