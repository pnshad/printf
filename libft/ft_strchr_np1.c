/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:34:43 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/31 18:00:58 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_np1(char *s, int c)
{
	unsigned char	uc;

	if (s)
	{
		uc = (unsigned char)c;
		while (*s != uc && *s)
			s++;
		if (*s == uc)
			return ((char *)s);
	}
	return (NULL);
}
