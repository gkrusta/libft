/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:03:33 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/26 07:25:15 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	exit_loop;

	i = 0;
	exit_loop = 0;
	while (str[i])
		i++;
	while (str[i] > 0)
	{
		if (str[i] == c && exit_loop == 0)
		{
			return (((char *)&str[i]));
			exit_loop = 1;
		}
		i--;
	}
	if (c == '\0')
		return (((char *)&str[i]));
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "1234567890";
	unsigned char	c;

	c = '7';
	printf ("the last occurrence of %c is in '%s' is %s \n\n",
		c, str, ft_strchr(str, c));
	printf ("the last occurrence of %c is in '%s' is %s \n\n",
		c, str, strchr(str, c));
	return (0);
} */