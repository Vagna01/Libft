/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:30:49 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/10 19:07:53 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *
	ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)(c);
		i++;
	}
	return (b);
}
