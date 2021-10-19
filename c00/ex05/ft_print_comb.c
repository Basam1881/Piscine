/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:06:26 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/22 14:08:53 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	var[3];

	var[0] = 0;
	while (var[0] <= 7)
	{
		var[1] = var[0] + 1;
		while (var[1] <= 8)
		{
			var[2] = var[1] + 1;
			while (var[2] <= 9)
			{
				ft_putchar(var[0] + 48);
				ft_putchar(var[1] + 48);
				ft_putchar(var[2] + 48);
				if (var[0] != 7 || var[1] != 8 || var[2] != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				var[2]++;
			}
			var[1]++;
		}
		var[0]++;
	}
}
