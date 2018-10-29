/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:14:54 by mdalil            #+#    #+#             */
/*   Updated: 2018/08/08 19:15:39 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstart(char *start, char *str)
{
	int		i;

	i = 0;
	while (str[i] && start[i] && str[i] == start[i])
		i++;
	if (i == (int)ft_strlen(start))
		return (1);
	return (0);
}
