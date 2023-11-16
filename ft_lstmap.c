/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:26:49 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 12:31:38 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_node;
	t_list	*current_node;

	if (!lst || !f || !del)
		return (NULL);
	head_node = ft_lstnew(f(lst->content));
	if (head_node == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		current_node = ft_lstnew(f(lst->content));
		if (current_node == NULL)
		{
			ft_lstclear(&head_node, del);
			return (NULL);
		}
		ft_lstadd_back(&head_node, current_node);
		lst = lst->next;
	}
	return (head_node);
}
