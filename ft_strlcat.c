/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 09:28:59 by marvin            #+#    #+#             */
/*   Updated: 2021/04/23 09:28:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libheader.h"

int ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_srnlen(dst, size);
	if (dst_len == size)
		return (size+src_len);
	if (src_len < size-dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
		dst[dst_len + size - 1] = '\0';
	}
	return (dst_len + src_len);
}

size_t ft_strnlen(const char *s, size_t maxlen)
{
	size_t len;

	len = 0;
	while (len++ < maxlen)
	{
		if (!*s++)
			break;
	}
	return (len);
}