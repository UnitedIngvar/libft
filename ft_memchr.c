/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:07:47 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/02 13:53:03 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*s_p;

	cc = (unsigned char)c;
	s_p = (unsigned char *)s;
	while (n--)
		if (*s_p == cc)
			return (s_p);
	else
		s_p++;
	return (NULL);
}
