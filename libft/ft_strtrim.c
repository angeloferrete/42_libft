/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:48:21 by asousa-f          #+#    #+#             */
/*   Updated: 2023/04/28 17:08:38 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *) malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s1 + start), (end - start + 1));
	return (str);
}
/* int main()
{
	char	str[] = "XXXXXXXXXXXXXXXXXangeloXXXXXXX";
	printf("%s", ft_strtrim(str, "X"));
	return (0);
} */