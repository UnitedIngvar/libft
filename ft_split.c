/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:40:25 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/04 19:51:37 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_str_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

//What if separators stay in line?
static char	**ft_split_create(char **splt, char const *src, char c, size_t strs)
{
	size_t	start;
	size_t	slen;
	size_t	i;

	slen = 0;
	i = 0;
	while (i < strs)
	{
		while (src[slen] == c)
			slen++;
		start = slen;
		while (src[slen] != c && src[slen])
			slen++;
		splt[i] = ft_substr(src, start, slen - start);
		if (!splt[i])
			ft_free_str_arr(splt);
		i++;
	}
	splt[i] = NULL;
	return (splt);
}

static size_t	ft_count_str(char const *s, char c)
{
	size_t	strs;

	strs = 0;
	if (!*s)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		strs++;
		while (*s == c && *s)
			s++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	strs;

	if (!s)
		return (NULL);
	strs = ft_count_str(s, c);
	res = (char **)malloc(sizeof(char *) * (strs + 1));
	if (!res)
		return (NULL);
	res[strs] = NULL;
	res = ft_split_create(res, s, c, strs);
	if (!res)
		return (NULL);
	return (res);
}
