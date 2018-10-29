/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 06:40:59 by elbenkri          #+#    #+#             */
/*   Updated: 2018/08/18 19:02:55 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#define ABS(Value)	(Value >= 0) ? 0 : 1
static int	ft_count(int cpy)
{
	int		i;

	i = 0;
	while (cpy >= 10)
	{
		cpy /= 10;
		i++;
	}
	i++;
	return (i);
}

static char	*ft_print(char *str, int n, int *i)
{
	while (n > 0)
	{
		str[*i] = (n % 10) + 48;
		*i = *i - 1;
		n /= 10;
	}
	return (str);
}

static char	*ft_lol(void)
{
	return (ft_strdup("-2147483648"));
}

char		*ft_itoa(int n)
{
	int		i;
	int		cpy;
	int		flg;
	char	*str;

	if (n == -2147483648)
		return (str = ft_lol());
	i = 0;
	flg = ABS(n);
	n = (flg == 0) ? n : n * -1;
	cpy = n;
	i = ft_count(cpy);
	(flg == 1) ? i++ : i;
	if ((str = (char *)malloc(sizeof(*str) * i + 1 + flg)) == 0)
		return (0);
	if (n == 0)
		str[0] = '0';
	str[i--] = '\0';
	str = ft_print(str, n, &i);
	if (flg == 1)
		str[i] = '-';
	return (str);
}
