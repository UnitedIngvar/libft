/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:12 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/02 20:19:22 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (dst_len + i + 1 < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len != size)
		dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
