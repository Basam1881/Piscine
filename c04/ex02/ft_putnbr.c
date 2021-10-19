/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:17:18 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/23 11:56:58 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	new_nb;

	if (nb == 0)
	{
		ft_putchar(nb + 48);
	}
	else if (nb > 0)
	{
		new_nb = nb / 10;
		if (new_nb != 0)
		{
			ft_putnbr(new_nb);
		}
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar('-');
		new_nb = 0 - (nb / 10);
		if (new_nb != 0)
		{
			ft_putnbr(new_nb);
		}
		ft_putchar(0 - (nb % 10) + 48);
	}
}
