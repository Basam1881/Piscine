/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:54:52 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/22 14:03:06 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}
