/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:42:57 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/21 16:13:59 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	f;

	str = (unsigned char *)s;
	f = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == f)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}
