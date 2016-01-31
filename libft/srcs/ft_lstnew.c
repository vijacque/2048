/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:23:32 by vijacque          #+#    #+#             */
/*   Updated: 2015/11/23 15:25:33 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ma_list;
	void	*cpy;

	ma_list = (t_list *)ft_memalloc(sizeof(t_list));
	if (!ma_list)
		return (NULL);
	if (content == NULL)
	{
		ma_list->content = NULL;
		ma_list->content_size = 0;
	}
	else
	{
		cpy = ft_memalloc(content_size);
		if (!cpy)
			return (NULL);
		ma_list->content = ft_memcpy(cpy, content, content_size);
		ma_list->content_size = content_size;
	}
	ma_list->next = NULL;
	return (ma_list);
}
