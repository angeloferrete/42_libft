/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:21:29 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 11:43:15 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ns;

	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	ns = malloc(len * sizeof(char));
	if (!ns)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		ns[i++] = s1[j++];
	j = 0;
	while (s2[j])
		ns[i++] = s2[j++];
	ns[i] = '\0';
	return (ns);
}
/* int	main()
{
	char	str1[]= "ola";
	char	str2[]= " manuel";
	printf("%s", ft_strjoin(str1, str2));
	return (0);
} */