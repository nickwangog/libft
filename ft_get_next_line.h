/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:01:13 by nwang             #+#    #+#             */
/*   Updated: 2017/09/25 22:01:30 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# define BUFF_SIZE 1000

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>

# include "libft.h"

int			ft_get_next_line(int const fd, char **line);

#endif
