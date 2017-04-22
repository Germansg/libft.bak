/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:04:20 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 17:31:49 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	findstart(char const *s)
{
	int	i;

	i = 0;
	if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
			i++;
	if (s[i] == '\0')
		return (-1);
	return (i);
}

static	int	findend(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;
	if (s[i] == '\0')
		return (0);
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*new;
	int		i;

	i = 0;
	start = findstart(s);
	end = findend(s);
	if (!*s)
	{
		new = (char *)s;
		return (new);
	}
	new = (char *)malloc(sizeof(char) * ((end - start) + 2));
	if (!new)
		return (NULL);
	while (start <= end)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
