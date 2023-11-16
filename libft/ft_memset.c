/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:50:35 by asousa-f          #+#    #+#             */
/*   Updated: 2023/04/28 16:59:08 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	i = 0;
	ps = (unsigned char *) str;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}
	return (ps);
}
/* int	main()
{
	char str[] = "ola manuel";
	
	ft_memset(str, 'X', 4);
	printf("%s", str);
	return(0);
} */