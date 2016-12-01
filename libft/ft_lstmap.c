/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 17:14:28 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 14:12:33 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	st_free(t_list *lst)
{
	t_list *new;

	while (lst != NULL)
	{
		new = lst->next;
		free(lst);
		lst = new;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *begin;
	t_list *tmp;

	tmp = (*f)(lst);
	if (!lst || !(new = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	begin = new;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = (*f)(lst);
		new->next = ft_lstnew(tmp->content, tmp->content_size);
		if (!(new->next))
		{
			st_free(begin);
			return (new);
		}
		lst = lst->next;
		new = new->next;
	}
	return (begin);
}
