/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:54:47 by asousa-f          #+#    #+#             */
/*   Updated: 2023/05/26 15:45:54 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if ((size_t)src > (size_t)dest)
	{
		ft_memmove(dest, src, n);
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char s1[]=" ola manuel";
	char s2[]= "joana";

	ft_memcpy(s1, s2, 3);
	printf("%s", s1);
	return(0);
}*/