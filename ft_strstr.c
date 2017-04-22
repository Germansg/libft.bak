/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:25:19 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:05:56 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*final_check(char *hay, const char *nee, int point, char *mark)
{
	while (*hay++ == nee[point])
	{
		point++;
		if (!nee[point])
			return (mark);
	}
	return (NULL);
}

char			*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*mark;
	char	*bigptr;

	i = 0;
	bigptr = (char *)big;
	if (*little == '\0')
		return (bigptr);
	while (*bigptr)
	{
		j = 0;
		if (*bigptr == little[j])
		{
			mark = bigptr;
			if (mark == final_check(bigptr, little, j, mark))
				return (mark);
		}
		i++;
		j++;
		mark = NULL;
		bigptr = (char *)big;
		bigptr += i;
	}
	return (NULL);
}
