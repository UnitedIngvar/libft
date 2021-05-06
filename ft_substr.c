/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:44:52 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/06 18:39:23 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;
	int		i;

	i = -1;
	substr = NULL;
	if (s == NULL)
		return (NULL);
	if (s != NULL)
	{
		slen = ft_strlen(s);
		if (slen <= start)
			return (substr = (char *)ft_calloc(1, sizeof(char)));
		if (len <= slen)
			substr = (char *)ft_calloc((len + 1), sizeof(char));
		else
			substr = (char *)ft_calloc((slen + 1), sizeof(char));
		if (!substr)
			return (NULL);
		while (s[++i + start] && len--)
			substr[i] = s[i + start];
	}
	return (substr);
}
