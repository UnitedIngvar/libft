/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:40:10 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/06 18:36:30 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
	temp = res;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew((*f)(lst->content));
		if (!temp->next)
		{
			if (del)
				ft_lstclear(&res, del);
			else
				ft_lstclear(&res, free);
			return (NULL);
		}
		temp = temp->next;
	}
	return (res);
}
