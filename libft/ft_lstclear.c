/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:52 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/19 16:11:55 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*last;

	if (lst)
	{
		while (*lst)
		{
			last = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = last;
		}
	}
}
