/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:39:26 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:24:38 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*srccopy;
	char	*dstcopy;

	srccopy = (char *)src;
	dstcopy = (char *)dst;
	i = 0;
	while (srccopy[i] && i < n)
	{
		dstcopy[i] = srccopy[i];
		i++;
	}
	return (dst);
}
