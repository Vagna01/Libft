/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:10:51 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/12 15:17:50 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos = NULL;

	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			pos = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	else
		return ((char *)pos);
}
