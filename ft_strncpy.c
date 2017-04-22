/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:52:22 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/29 01:34:45 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *dstptr;
	char *srcptr;

	dstptr = dst;
	srcptr = (char *)src;
	while (*srcptr && len)
	{
		len--;
		*dstptr++ = *srcptr++;
	}
	while (len)
	{
		len--;
		*dstptr++ = '\0';
	}
	return (dst);
}
