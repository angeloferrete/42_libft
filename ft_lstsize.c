/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:23:00 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 12:32:21 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	size_t	size;

	tmp = lst;
	size = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
