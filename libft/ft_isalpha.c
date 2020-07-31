/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:23:15 by bandrow           #+#    #+#             */
/*   Updated: 2020/07/31 23:59:51 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		isupper(int c)
{
	unsigned char letter;

	letter = (char)c;
	return (letter >= 'A' && letter <= 'Z');
}

static	int		islower(int c)
{
	unsigned char letter;

	letter = (char)c;
	return (letter >= 'a' && letter <= 'z');
}

int				ft_isalpha(int c)
{
	return (isupper(c) || islower(c));
}
