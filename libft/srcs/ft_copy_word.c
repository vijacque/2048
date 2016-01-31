/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:16:56 by vijacque          #+#    #+#             */
/*   Updated: 2015/11/27 12:18:38 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_copy_word(char const *s, size_t *l, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[*l] == c && s[*l])
		*l = *l + 1;
	if (s[*l] != c && s[*l])
	{
		i = *l;
		while (s[*l] != c && s[*l])
			*l += 1;
	}
	str = ft_strsub(s, (unsigned int)i, (*l - i));
	return (str);
}
