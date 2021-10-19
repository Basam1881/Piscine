/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:13:56 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/23 01:47:12 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int i, int j)
{
	int d1;
	int d2;
	int d3;
	int d4;

	d1 = i / 10;
	d2 = i % 10;
	d3 = j / 10;
	d4 = j % 10;
	ft_putchar(d1 + 48);
	ft_putchar(d2 + 48);
	ft_putchar(' ');
	ft_putchar(d3 + 48);
	ft_putchar(d4 + 48);
	if (!(i == 98 && j == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_digits(i, j);
			j++;
		}
		i++;
	}
}
