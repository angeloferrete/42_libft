/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:00:08 by asousa-f          #+#    #+#             */
/*   Updated: 2023/05/26 15:28:13 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t	n)
{
	ft_memset(str, 0, n);
}

/* int	main()
{
	char	*str = "ola";
	
	printf("%s", ft_bzero(str, '1'));
	printf("%s", str);
	return(0);
} */