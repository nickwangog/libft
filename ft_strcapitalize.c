/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 22:12:48 by nwang             #+#    #+#             */
/*   Updated: 2017/10/03 18:52:21 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65))
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
