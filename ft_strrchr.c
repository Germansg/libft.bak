/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 07:45:16 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:13:47 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temps;
	int		len;

	temps = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (&temps[len++]);
	while (len--)
	{
		if (temps[len] == (char)c)
			return (&temps[len]);
	}
	return (NULL);
}
