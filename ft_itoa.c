/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:29:27 by asousa-f          #+#    #+#             */
/*   Updated: 2023/05/04 13:05:07 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	i;
	size_t	sign;

	i = len(n);
	ptr = malloc((sizeof(char)) * (i + 1));
	sign = 1;
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (n == 0)
		ptr[i] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		sign = -1;
	}
	while (n != 0)
	{
		ptr[i] = ((n % 10) * sign) + '0';
		n /= 10;
		i--;
	}
	return (ptr);
}
/* int main()
{
	printf ("%s", ft_itoa('A'));
	return (0);
} */