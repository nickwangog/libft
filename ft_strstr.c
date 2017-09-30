/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 22:32:45 by nwang             #+#    #+#             */
/*   Updated: 2017/09/28 22:39:15 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)s1;
	i = 0;
	if (str && s2)
	{
		if (!*s2)
			return (str);
		while (str[i])
		{
			j = 0;
			while (s2[j] == str[i + j])
			{
				if (!(s2[j + 1]))
					return (str + i);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
