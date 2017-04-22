/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 08:30:03 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:15:21 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshy_fresh;
	int		size1;
	int		size2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (!(freshy_fresh = (char *)malloc(sizeof(char) * ((size1 + size2) + 1))))
		return (NULL);
	while (s1[i])
	{
		freshy_fresh[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		freshy_fresh[i] = s2[j];
		i++;
		j++;
	}
	freshy_fresh[i] = '\0';
	return (freshy_fresh);
}
