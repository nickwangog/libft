/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:24:11 by nwang             #+#    #+#             */
/*   Updated: 2017/09/27 20:14:33 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	if(!dst || !src)
		return (0);
	res = ft_strlen(src);
	while (dst[i] != '\0' && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] != '\0' && i < size - 1)
			dst[i++] = src[j++];
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (res + i - j);
	}
	return (res + i);
}
