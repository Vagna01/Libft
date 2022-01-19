/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:57:10 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/12 16:57:14 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t ln)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (big[i] && (i < ln))
	{
		while ((big[i + j] == little[j]) && little[j] && ((i + j) < ln))
			j += 1;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i += 1;
	}
	if (!little[0])
		return ((char *)&big[i]);
	return (NULL);
}
