/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 07:45:16 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/24 11:33:23 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i + 1] != '\0')
		i++;
	if (c == '\0')
	{
		s = s + i + 1;
		return ((char *)s);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			s = s + i;
			return ((char *)s);
		}
		i--;
	}
	return (NULL);
}
