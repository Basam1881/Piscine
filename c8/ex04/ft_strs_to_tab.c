/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 01:20:12 by mal-guna          #+#    #+#             */
/*   Updated: 2021/06/05 01:46:20 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*element;
	int					i;

	i = 0;
	element = malloc(sizeof(struct s_stock_str) * (ac + 1));
	while (i < ac)
	{
		element[i].size = ft_strlen(av[i]);
		element[i].str = av[i];
		element[i].copy = ft_strdup(av[i]);
		i++;
	}
	element[i].size = 0;
	element[i].str = 0;
	element[i].copy = 0;
	return (element);
}
