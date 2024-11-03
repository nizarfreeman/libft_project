/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <nfaska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:46:38 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/30 02:19:03 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	digits_count(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*res;
	long	digits;

	num = (long) n;
	digits = digits_count(num);
	res = (char *)malloc((digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[digits--] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		res[digits] = (num % 10) + 48;
		digits--;
		num /= 10;
	}
	return (res);
}
