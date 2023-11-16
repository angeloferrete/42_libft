/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:44:46 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 11:54:54 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (len - 1) > 0)
	{
		i++;
		len--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* int	main()
{
	printf("%d", ft_strncmp("ola", "oLa", 1));
	return (0);
} */