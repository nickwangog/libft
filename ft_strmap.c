/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 19:10:41 by nwang             #+#    #+#             */
/*   Updated: 2017/09/29 19:36:28 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int 	i;
	char	*str;
	
	i = 0;
	while (s[i] != '\0')
	{
		f(s[i]);
		i++;
	}
	if (s && f)
		return(str = (char*)malloc(sizeof(char)*i));
	return (NULL);
}
