/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:59:07 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/02 13:53:02 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dst_p;
	const unsigned char		*src_p;
	unsigned char			c_cp;
	size_t					i;

	src_p = (const unsigned char *)src;
	dst_p = (char unsigned *)dst;
	c_cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst_p[i] = src_p[i];
		if (src_p[i++] == c_cp)
			return (dst + i);
	}
	return (NULL);
}
