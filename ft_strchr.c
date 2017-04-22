/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:29:30 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:23:34 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*string;

	i = 0;
	string = (char *)s;
	len = ft_strlen(string);
	if ((char)c == '\0')
		return (&string[len]);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			s = s + i;
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}
