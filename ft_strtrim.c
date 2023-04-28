/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:16:14 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/28 16:38:20 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	comparing(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;

	end = ft_strlen((char *)s1);
	start = 0;
	while (comparing(s1[start], set) && s1[start])
		start++;
	if (set[start] != '\0')
		start = 0;
	while (comparing(s1[end - 1], set) && end > start)
		end--;
	if (s1[end] != set[0])
		end = ft_strlen((char *)s1);
	result = malloc((sizeof(char)) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (end - start > 0)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	char const	s1[] = "variablenumber var num 123 number variable";
	char const	set[] = "variable";
	printf("result: %s\n", ft_strtrim(s1, set));
	return (0);
} */