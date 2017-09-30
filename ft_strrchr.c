/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 20:29:56 by nwang             #+#    #+#             */
/*   Updated: 2017/09/28 22:20:31 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	str = (char*)s;
	if (str)
	{
		len = ft_strlen(str);
		while (i < (int)len)
		{
			i++;
			str++;
		}
		while (i >= 0)
		{
			if (str[0] == (char)c)
				return (str);
			i--;
			str--;
		}
	}
	return (NULL);
}
