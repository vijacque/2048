/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:22:16 by vijacque          #+#    #+#             */
/*   Updated: 2015/11/23 15:23:05 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list*new;

	if ((new = (t_list*)malloc(sizeof(*new))))
		new = f(lst);
	else
		return (NULL);
	if (lst->next != NULL)
		new->next = ft_lstmap(lst->next, *f);
	else
		new->next = NULL;
	return (new);
}
