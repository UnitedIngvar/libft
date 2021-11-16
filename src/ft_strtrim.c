/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:42:10 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/03 13:34:39 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	trl;
	size_t	pre;

	if (!s1 || !set)
		return (NULL);
	pre = 0;
	trl = ft_strlen(s1);
	i = 0;
	while (s1[pre] && ft_contains(set, s1[pre]))
		pre++;
	while (trl > pre && ft_contains(set, s1[trl - 1]))
		trl--;
	res = (char *)malloc(sizeof(char) * (trl - pre + 1));
	if (!res)
		return (NULL);
	while (pre < trl)
		res[i++] = s1[pre++];
	res[i] = '\0';
	return (res);
}
