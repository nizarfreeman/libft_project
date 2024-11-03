/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:43:05 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/30 05:34:18 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	skip_spaces(const char	**s)
{
	while ((**s >= 9 && **s <= 13) || **s == ' ')
		(*s)++;
}

static void	sign_check(const char **s, int *flag, int *double_sign)
{
	if (**s == '-' || **s == '+')
	{
		if (*(*s + 1) == '+' || (*(*s + 1)) == '-')
		{
			*double_sign = 1;
			return ;
		}
		if (**s == '-')
			*flag = 1;
		(*s)++;
	}
}

static int	ll_check(unsigned long long res, int flag)
{
	if (res > L_MAX)
	{
		if (flag == 1)
			return (0);
		else
			return (-1);
	}
	return (1);
}

int	ft_atoi(const char *s)
{
	unsigned long long	res;
	int					flag;
	int					double_sign;
	int					check;

	flag = 0;
	double_sign = 0;
	skip_spaces(&s);
	sign_check(&s, &flag, &double_sign);
	if (double_sign)
		return (0);
	res = 0;
	check = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		check = ll_check(res, flag);
		if (check != 1)
			return (check);
		s++;
	}
	if (flag)
		return ((int)(-res));
	return ((int)res);
}
