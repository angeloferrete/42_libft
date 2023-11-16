/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:13:23 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 11:42:38 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	cpy = (char *)malloc(sizeof(char) * i + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (*s)
		cpy[i++] = *s++;
	cpy[i] = '\0';
	return (cpy);
}
/* int main()
{
	char	str[] = "ola manuel";
	ft_strdup(str);
	printf("%s", str);
	return (0);
} */