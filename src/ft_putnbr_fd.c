/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:22:41 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/04 17:55:18 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

static	void	ft_recursive(int n, int fd)
{
	if (n != 0)
		ft_recursive((n / 10), fd);
	if (n != 0)
		ft_putchar_fd((ft_abs(n % 10) + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_recursive(n, fd);
}
