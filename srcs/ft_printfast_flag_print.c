/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfast_flag_print.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 14:45:18 by mdalil            #+#    #+#             */
/*   Updated: 2017/12/19 14:45:19 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "ft_printfast.h"
#include "libft.h"

size_t		ft_putstr_flag_fd(int fd, const char *str, t_flag *flag)
{
	size_t	len;
	size_t	str_len;

	str_len = (str) ? ft_strlen(str) : 6;
	if (flag)
	{
		len = (flag->field > str_len) ? flag->field : str_len;
		while (!flag->just && flag->field-- > str_len)
			write(fd, " ", 1);
	}
	write(fd, ((str) ? str : "(null)"), str_len);
	if (flag)
	{
		while (flag->just && flag->field-- > str_len)
			write(fd, " ", 1);
	}
	return (len);
}

size_t		ft_putchar_flag_fd(int fd, char c, t_flag *flag)
{
	size_t	len;

	if (flag)
	{
		len = (flag->field > 1) ? flag->field : 1;
		while (!flag->just && flag->field-- > 1)
			write(fd, " ", 1);
	}
	write(fd, &c, 1);
	if (flag)
	{
		while (flag->just && flag->field-- > 1)
			write(fd, " ", 1);
	}
	return (1);
}

static	int	get_size(int n, size_t *len)
{
	int size;

	size = 1;
	while (n >= 10)
	{
		n /= 10;
		size *= 10;
		(*len)++;
	}
	(*len)++;
	return (size);
}

size_t		ft_putnbr_flag_fd(int fd, long long n, t_flag flag)
{
	size_t	len;
	int		size;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr_flag_fd(fd, "-2147483648", NULL));
	if (n < 0 && (n = -n) && (++len))
		write(fd, "-", 1);
	size = get_size(n, &len);
	while (!flag.just && flag.field-- > len)
		write(fd, " ", 1);
	while (size > 0)
	{
		ft_putchar_flag_fd(fd, '0' + (n / size), NULL);
		n %= size;
		size /= 10;
	}
	while (flag.just && flag.field-- > len)
		write(fd, " ", 1);
	return (len);
}
