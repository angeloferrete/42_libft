/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:25:55 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 12:32:07 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next_node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}
