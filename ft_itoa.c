/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:38:56 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/04 17:45:27 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_num(long n)
{
	int	res;

	res = 1;
	while (n > 9)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static void	ft_change_sign(int n, int *sign)
{
	if (n < 0)
		*sign = 1;
}

static	void	ft_reverse(char *s, int size)
{
	int		i;
	char	c;

	i = -1;
	while (++i < --size)
	{
		c = s[i];
		s[i] = s[size];
		s[size] = c;
	}
}

static	long	ft_abs(long n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	i = 0;
	sign = 0;
	ft_change_sign(n, &sign);
	str = ft_calloc((count_num(ft_abs((long)n)) + 1 + sign), sizeof(char));
	if (!str)
		return (NULL);
	while (1)
	{
		str[i++] = ft_abs(n % 10) + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	if (sign == 1)
		str[i++] = '-';
	ft_reverse(str, i);
	return (str);
}
