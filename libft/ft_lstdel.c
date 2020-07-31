/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:42:44 by bandrow           #+#    #+#             */
/*   Updated: 2020/08/01 00:09:39 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *))
{
	t_list *current;
	t_list *d;

	if (alst && del)
	{
		current = *alst;
		d = 0;
		while (current)
		{
			d = current;
			current = current->next;
			del(d->content);
			d->content_size = 0;
			free(d);
		}
	}
	*alst = 0;
}
