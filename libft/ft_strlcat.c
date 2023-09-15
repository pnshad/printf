/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:29:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/26 20:24:21 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*dst;
	char	*src_start;
	size_t	dst_length;
	size_t	space;

	dst = dest;
	src_start = (char *)src;
	space = size;
	while (space-- && *dst)
		dst++;
	dst_length = dst - dest;
	space = size - dst_length;
	if (space == 0)
		return (dst_length + ft_strlen((char *) src));
	while (*src)
	{
		if (space > 1)
		{
			*dst++ = *src;
			space--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}
