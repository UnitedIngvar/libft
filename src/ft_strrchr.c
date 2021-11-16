/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:34:47 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/02 16:02:37 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		len;

	cc = (char)c;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == cc)
			return ((char *)(s + len));
	}
	return (NULL);
}
