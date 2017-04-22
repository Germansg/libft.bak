/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:50:03 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:41:41 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strqu(char const *s1, char const *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		else
		{
			s1++;
			s2++;
		}
	}
	return (1);
}
