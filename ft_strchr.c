/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:41:18 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/27 12:10:42 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	exit_loop;

	i = 0;
	exit_loop = 0;
	while (str[i])
	{
		if (str[i] == c && exit_loop == 0)
		{
			return (((char *)&str[i]));
			exit_loop = 1;
		}
		i++;
	}
	if (c == '\0')
		return (((char *)&str[i]));
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "123456789087777";
	unsigned char	c;

	c = '7';
	printf ("the first occurrence of %c is in '%s' is %s \n\n",
		c, str, ft_strchr(str, c));
	printf ("the first occurrence of %c is in '%s' is %s \n\n",
		c, str, strchr(str, c));
	return (0);
} */