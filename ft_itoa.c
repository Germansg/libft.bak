/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 08:28:49 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/21 17:55:46 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	num_length(int num)
{
	size_t	len;

	len = 0;
	while(num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int		neg;

	len = num_length(n);
	if (n < 0)
	{
		neg = 1;
		len++;
		n = -n;
	}
	if (!(result = ft_strnew(len)))
		return (result);
	result[len] = '\0';
	len--;
	while (len)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}	   
	if (neg == 1)
		result[len] = '-';
	return(result);
}
