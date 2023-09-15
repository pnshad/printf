/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:03:58 by pnourish          #+#    #+#             */
/*   Updated: 2023/06/02 18:50:12 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_iswhite(char c)
{
	return (c == '\n' || c == '\t' || c == ' '
		|| c == '\r' || c == '\v' || c == '\f');
}

static int	st_edge(int sign, unsigned long long int result)
{
	if (sign > 0 && result > LLONG_MAX)
		return ((int)(LLONG_MAX));
	else if (sign < 0 && result - 1 > LLONG_MAX)
		return (0);
	return (sign * (int)result);
}

int	ft_atoi(const char *str)
{
	unsigned long long int	result;
	int						counter;
	int						sign;

	result = 0;
	sign = 1;
	counter = 0;
	while (str[counter] && st_iswhite(str[counter]))
		counter++;
	if ((str[counter] == '-') || (str[counter] == '+'))
	{
		if (str[counter] == '-')
			sign *= -1;
		counter++;
	}
	while (str[counter] == '0')
		counter++;
	while (str[counter] && str[counter] >= '0' && str[counter] <= '9')
	{
		if ((result * 10) > ULLONG_MAX - (str[counter] - '0'))
			return (st_edge(sign, LLONG_MAX));
		result = (result * 10) + (str[counter++] - '0');
	}
	return (st_edge(sign, result));
}
