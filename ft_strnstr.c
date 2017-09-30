/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 22:32:45 by nwang             #+#    #+#             */
/*   Updated: 2017/09/28 22:39:08 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		while (s1[i] != s2[j] && s1[i])
			i++;
		str = (char*)&(s1[i]);
		while (s1[i] == s2[j] && s1[i] && s2[j] && i++ < n)
		{
			j++;
		}
		if (!s2[j])
			return (str);
		else
			j = 0;
	}
	return (NULL);
}
