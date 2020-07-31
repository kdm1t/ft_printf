/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:40:00 by bandrow           #+#    #+#             */
/*   Updated: 2020/08/01 00:05:12 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char			*ft_strtrim(char const *s)
{
	size_t i_start;
	size_t i_end;

	if (s)
	{
		i_start = 0;
		while (ft_is_space(s[i_start]))
			i_start++;
		if (s[i_start] == '\0')
			return (ft_strnew(0));
		i_end = ft_strlen(s) - 1;
		while (ft_is_space(s[i_end]))
			i_end--;
		return (ft_strsub(s, i_start, i_end - i_start + 1));
	}
	return (0);
}
