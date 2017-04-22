/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:51:37 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:22:55 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tempdst;
	unsigned char	*tempsrc;

	tempsrc = (unsigned char *)src;
	tempdst = (unsigned char *)dst;
	if (tempsrc < tempdst)
	{
		while (len--)
			tempdst[len] = tempsrc[len];
	}
	else
	{
		while (len--)
			*tempdst++ = *tempsrc++;
	}
	return (dst);
}
