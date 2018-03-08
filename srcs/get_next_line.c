/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 22:53:56 by mdalil            #+#    #+#             */
/*   Updated: 2018/03/07 22:53:57 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		fill_buffer(int fd, char **str)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char	*tmp;

	ft_memset(buff, 0, BUFF_SIZE + 1);
	if ((ret = read(fd, buff, BUFF_SIZE)) < 0)
		return (-1);
	if (ret == 0)
		return (ret);
	if (ret > 0)
	{
		tmp = (*str);
		(*str) = ft_strjoin((*str), buff);
		if (tmp)
			free(tmp);
	}
	return (1);
}

void	fill_line(char **str, char **line, int *index)
{
	int			size;

	size = 0;
	while ((*str)[*index + size] && (*str)[*index + size] != '\n')
		size++;
	(*line) = ft_strnew(size);
	ft_strncat((*line), *str + *index, size);
	*index += (((*str)[*index + size]) == '\n') ? size + 1 : size;
}

int		get_next_line(int fd, char **line)
{
	static char	*str = NULL;
	static int	index = 0;
	int			ret;

	if (!str)
		str = ft_strnew(0);
	while (!ft_strchr(str + index, '\n'))
	{
		ret = fill_buffer(fd, &str);
		if (ret == -1)
			return (-1);
		if (ret == 0)
		{
			if (ft_strlen(str + index) > 0)
				break ;
			return (0);
		}
	}
	fill_line(&str, line, &index);
	return (1);
}
