/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:34:37 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:19:41 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if ((unsigned char)!*s1 || !(unsigned char)*s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	while ((unsigned char)*s2++ && (unsigned char)*s1++)
	{
		if ((unsigned char)*s2 != (unsigned char)*s1)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
