/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:57:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/31 17:55:18 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ucp;
	unsigned char	*src_ucp;

	dst_ucp = (unsigned char *)dst;
	src_ucp = (unsigned char *)src;
	if (!dst_ucp && !src_ucp)
		return (dst);
	if (src < dst)
		while (n--)
			dst_ucp[n] = src_ucp[n];
	else
		while (n--)
			*dst_ucp++ = *src_ucp++;
	return (dst);
}
