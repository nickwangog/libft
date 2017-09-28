/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:22:27 by nwang             #+#    #+#             */
/*   Updated: 2017/09/23 14:30:42 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	counter;
	char	*str_dst;
	char	*str_src;

	if (!dst || !src)
	return (NULL);
	counter = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (counter < n)
	{
	str_dst[counter] = str_src[counter];
	counter++;
	}
	return ((void*)dst);
}
