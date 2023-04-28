/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:41:18 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/28 13:01:47 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (((char *)&str[i]));
		i++;
	}
	if (c == '\0' || c == 1024)
		return (((char *)&str[i]));
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "12341";
	unsigned char	c;

	c = '\0';
	printf ("the first occurrence of %c is in '%s' is %s \n\n",
	c, str, ft_strchr(str, c));
	printf ("the first occurrence of %c is in '%s' is %s \n\n",
	c, str, strchr(str, c));
} */