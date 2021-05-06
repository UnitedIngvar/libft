/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:58:00 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/05/04 19:28:06 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp (const char *s1, const char *s2)
{
	size_t	len1;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	while (s1[i] && s2[i] == s1[i] && i < len1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		ft_strcmp(s1, s2);
	while (s1[i] && s2[i] == s1[i] && i < n - 1)
		i++;
	if (n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
