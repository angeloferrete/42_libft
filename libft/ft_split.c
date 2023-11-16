/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:20:20 by asousa-f          #+#    #+#             */
/*   Updated: 2023/06/23 11:51:47 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char separator)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == separator)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != separator)
			i++;
	}
	return (count);
}

size_t	size_specific_word(char *s, char separator)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != separator)
		i += 1;
	return (i);
}

char	*words(char *s, char separator)
{
	size_t	i;
	size_t	len;
	char	*word;

	len = size_specific_word(s, separator);
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i += 1;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	j;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[j] = words((char *)s, c);
			j += 1;
		}
		while (*s && *s != c)
			s++;
	}
	res[j] = 0;
	return (res);
}
/* int	main()
{
	char	*str;
	str = "ola;manuel; esta; tudo bem?";
	printf("%c", ft_split(str, ';')[1]);
	return(0);
} */