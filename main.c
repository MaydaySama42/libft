/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalil <mdalil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:50:41 by mdalil            #+#    #+#             */
/*   Updated: 2018/10/30 22:40:19 by mdalil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char	*remove_quotes(char *str)
{
	char	token[LINE_MAX];
	int		i;

	i = 0;
	ft_memset(token, 0, LINE_MAX);
	while (str[i])
	{
		if (str[i] != '\"' && str[i] != '\'')
			ft_strncat(token, &str[i], 1);
		i++;
	}
	if (token[0] != 0 && ft_strlen(str) != ft_strlen(token))
	{
		free(str);
		return (ft_strdup(token));
	}
	return (str);
}

void	remove_quotes_args(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = remove_quotes(tab[i]);
		i++;
	}
}

int main(void)
{
    char    **tab;
    int     i;

    i = 0;
    tab = ft_strsplit_token("\"ls -la\" test de \'no\'a", " \n\t");
	remove_quotes_args(tab);
    while (tab[i])
    {
        puts(tab[i]);
        i++;
    }
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
    return (0);
}