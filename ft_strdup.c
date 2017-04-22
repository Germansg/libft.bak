/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 18:21:48 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:15:51 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		size;

	size = ft_strlen(s1);
	i = 0;
	s2 = (char*)malloc(sizeof(char) * size + 1);
	if (s2 == NULL)
		return (NULL);
	while (i < size)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (&s2[0]);
}
