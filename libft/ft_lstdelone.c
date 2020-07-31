/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:29:23 by bandrow           #+#    #+#             */
/*   Updated: 2020/08/01 00:13:02 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	if (alst && del)
	{
		del((*alst)->content);
		(*alst)->content_size = 0;
		free(*alst);
		*alst = 0;
	}
}
