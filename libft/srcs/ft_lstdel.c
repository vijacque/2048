/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:17:54 by vijacque          #+#    #+#             */
/*   Updated: 2015/11/25 11:54:07 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*current;
	t_list	*list;

	if (alst && *alst)
	{
		list = *alst;
		current = list->next;
		while (current)
		{
			next = current->next;
			ft_lstdelone(&current, del);
			current = next;
		}
		ft_lstdelone(alst, del);
	}
}
