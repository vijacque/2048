/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:11:28 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:19:01 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
		str[len++] = s2[i++];
	str[len] = '\0';
	return (str);
}
