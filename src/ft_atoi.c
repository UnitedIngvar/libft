/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:37:40 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/06 18:36:58 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	overflow_return(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int	minus;
	int	result;
	int	iters;

	result = 0;
	minus = 1;
	iters = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus *= -1;
		str++;
	}
	else if (*str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		iters++;
		if (iters > 19)
			return (overflow_return(minus));
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minus);
}
