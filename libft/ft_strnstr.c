/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:53:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/31 18:08:48 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	litlen;

	if (little[0] == '\0')
		return ((char *)big);
	litlen = ft_strlen(little);
	if (len == 0)
		return (NULL);
	while (*big && len >= litlen)
	{
		if (st_memcmp(big, little, litlen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

static int	st_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0 && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
