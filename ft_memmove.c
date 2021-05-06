/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:38:33 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/06 18:38:35 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_p;
	char		*dst_p;

	src_p = (const char *)src;
	dst_p = (char *)dst;
	if (src_p < dst_p && dst_p < src_p + len)
		while (len--)
			*(dst_p + len) = *(src_p + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
