/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:35:38 by mdalil            #+#    #+#             */
/*   Updated: 2018/08/18 19:05:34 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s, int n, int for_free)
{
	int	i;
	char	*str;

	i = 0;
	if (n == 0)
		return ((char*)s);
	str = malloc(sizeof(*str) * n + 1);
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	if (for_free)
		free((char*)s);
	return (str);
}
