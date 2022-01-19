/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:48:46 by avagnare          #+#    #+#             */
/*   Updated: 2022/01/19 12:48:57 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	x;
	int		l;
	char	*str;

	x = n;
	l = len(x);
	str = malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);
	if (x == 0)
		str[0] = '0';
	if (x < 0)
	{
		str[0] = '-';
		x = x * -1;
	}
	str[l--] = '\0';
	while (x > 0)
	{
		str[l--] = 48 + (x % 10);
		x = x / 10;
	}
	return (str);
}
