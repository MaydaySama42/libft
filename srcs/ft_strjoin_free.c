/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:00:41 by elbenkri          #+#    #+#             */
/*   Updated: 2018/08/18 19:06:42 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin_free(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL && s2)
		str = (char *)malloc(sizeof(char) * ft_strlen(s2) + 1);
	else if (s2 == NULL && s1)
		str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	else
		str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1 != 0 && s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2 != 0 && s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	if (s1 != 0)
		free(s1);
	if (s2 != 0)
		free(s2);
	return (str);
}
