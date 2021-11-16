/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:39:14 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/06 18:39:17 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	i;
	size_t	llen;

	llen = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < blen && big[i])
	{
		if (llen > blen - i)
			return (NULL);
		if (big[i] == little[0])
		{
			if (!ft_strncmp(&big[i], little, llen))
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
