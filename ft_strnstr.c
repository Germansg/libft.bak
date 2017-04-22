/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:14:01 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/21 01:59:10 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *pod, const char *pea, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	mark;

	i = 0;
	if (pea[i] == '\0')
		return ((char *)pod);
	while (i < len && pod[i])
	{
		j = 0;
		if (pod[i] == pea[j] && pea[j])
		{
			mark = i;
			while (pod[i] == pea[j] && pea[j] && i < len)
			{
				i++;
				j++;
				if (pea[j] == '\0')
					return ((char *)&pod[mark]);
			}
			i = mark;
		}
		i++;
	}
	return (NULL);
}
