/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:35:49 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/27 18:56:14 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
	{	
			if (src[i] == '\0')
					return (ft_strlen(src) + size);
			i++;
	}
	while (src[j] && i < size && dst[i])
	{
			if (src[i] == '\0')
					return (ft_strlen(src) + size);
		dst[i] = src[j];
		i++;
		j++;
	}
	return (ft_strlen(src) + size);
}
