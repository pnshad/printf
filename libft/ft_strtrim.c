/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:12:24 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 14:15:49 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *s);

static char		*st_strchr(const char *s, char c);

static size_t	st_strlcpy(char *restrict dst, const char *restrict src,
					size_t dstsize);

char	*ft_strtrim(char const *src, char const *set)
{
	size_t	srclen;
	char	*dst;
	char	*start;
	char	*end;

	if (!src || !set)
		return (NULL);
	srclen = st_strlen(src);
	start = (char *)src;
	end = (char *)src + srclen - 1;
	while (*start && st_strchr(set, *start))
		start++;
	while (end > start && st_strchr(set, *end))
		end--;
	srclen = end - start + 1;
	dst = (char *)malloc(srclen + 1);
	if (dst == NULL)
		return (NULL);
	st_strlcpy(dst, start, srclen + 1);
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

static char	*st_strchr(const char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

static size_t	st_strlcpy(char *restrict dst, const char *restrict src,
					size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{	
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
