/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 22:53:56 by mdalil            #+#    #+#             */
/*   Updated: 2018/03/07 22:53:57 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	read_stdin(char **line)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];
	char	*tmp;

	while (!ft_strchr(buff, '\n'))
	{
		ft_memset(buff, 0, BUFF_SIZE + 1);
		if ((ret = read(1, buff, BUFF_SIZE)))
			break ;
		tmp = *line;
		(*line) = ft_strjoin(*line, buff);
		if (tmp)
			free(tmp);
	}
	return ((ret <= 0) ? ret : 1);
}