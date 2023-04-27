/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:58:11 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/26 19:27:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numblen(long n)
{
	size_t	count;

	if ()
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("result: %c", ft_itoa(-3));
	printf("Size of long on this system: %ld bytes\n", sizeof(long));
	return (0);
}

