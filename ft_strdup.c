/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:31:35 by nwang             #+#    #+#             */
/*   Updated: 2017/09/26 22:19:06 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *result = malloc(strlen(str) + 1);
	char *psrc = str;
	char *pdst = result;
	while (*psrc != 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	*pdst = '\0';
	return result;
}
