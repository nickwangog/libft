/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 19:10:41 by nwang             #+#    #+#             */
/*   Updated: 2017/09/29 20:14:27 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char			*str;
	
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s[i]);
		i++;
	}
	if (s && f)
		return(str = (char*)malloc(sizeof(char)*i));
	return (NULL);
}
