/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:11:13 by mdalil            #+#    #+#             */
/*   Updated: 2018/04/03 16:29:12 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;

	if (!str)
		return (NULL);
	CHECK((dup = malloc(sizeof(char) * (ft_strlen(str) + 1))));
	ft_memset(dup, 0, ft_strlen(str) + 1);
	ft_strcat(dup, str);
	return (dup);
}
