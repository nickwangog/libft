/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:22:27 by nwang             #+#    #+#             */
/*   Updated: 2017/09/28 21:09:09 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;
	char	*str_dst;
	char	*str_src;
	char	*temp;

	if (!dst || !src)
		return (NULL);
	counter = 0;
	temp = (char*)malloc(sizeof(src));
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (counter < len)
	{
		temp[counter] = str_src[counter];
		counter++;
	}
	free(temp);
	return (dst);
}
