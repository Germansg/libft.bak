/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:41:22 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:31:15 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (((char *)src)[i] && (i != n))
	{
		if ((char)c == (((char *)src)[i]))
		{
			((char *)dst)[i] = (unsigned char)c;
			i++;
			return (&dst[i]);
		}
		else
			((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
