/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:04:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/31 17:49:59 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *s);

static size_t	st_strlcpy(char *restrict dst, const char *src, size_t dstsize);

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	len = st_strlen(src) + 1;
	dst = (char *)malloc(len * sizeof(char));
	if (dst == NULL)
		return (NULL);
	st_strlcpy(dst, src, len);
	return (dst);
}

static size_t	st_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	st_strlcpy(char *restrict dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src [i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
