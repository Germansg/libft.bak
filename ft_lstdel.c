/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:42:08 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/20 19:46:56 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *that_one;

	current = *alst;
	while (current != NULL)
	{
		that_one = current->next;
		del(current, current->content_size);
		current = that_one;
	}
	*alst = NULL;
}
