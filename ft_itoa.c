/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:58:11 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/27 13:16:43 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_numblen(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = ft_numblen((long)(n));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= (-1);
	}
	if (n == 0)
		result[0] = '0';
	while (len > 0)
	{
		result[len--] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	printf("result: %s\n\n", ft_itoa(-89578576));
	printf("Size of long on this system: %ld bytes\n", sizeof(long));
	return (0);
} */