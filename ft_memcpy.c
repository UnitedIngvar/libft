/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:58:25 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/02 13:21:49 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_p;
	const char	*src_p;

	if (src == NULL && dest == NULL)
		return (NULL);
	if (n > 0)
	{
		dest_p = (char *)dest;
		src_p = (char *)src;
		while (n--)
			*dest_p++ = *src_p++;
	}
	return (dest);
}
