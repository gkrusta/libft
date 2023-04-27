/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:59:25 by gkrusta           #+#    #+#             */
/*   Updated: 2023/04/27 12:03:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)b;
	while (counter < len)
	{
		ptr[counter] = (unsigned char)c;
		counter++;
	}
	return (b);
}
