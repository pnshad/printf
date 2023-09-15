/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:44:12 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/29 05:04:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	else
	{	
		current = *lst;
		while (current)
		{
			next = current->next;
			if (del)
				del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
