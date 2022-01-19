/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:21:53 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/12 16:22:00 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				a;
	unsigned const char	*us1;
	unsigned const char	*us2;

	us1 = (unsigned const char *)s1;
	us2 = (unsigned const char *)s2;
	a = 0;
	while (a < n && us1[a] == us2[a])
	{
		a++;
	}
	if (a == n)
		return (0);
	else
		return (us1[a] - us2[a]);
}
