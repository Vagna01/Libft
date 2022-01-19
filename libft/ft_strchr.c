/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:16:08 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/12 14:52:47 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		if (!*s)
			return (NULL);
		s++;
	}
	return (NULL);
}
