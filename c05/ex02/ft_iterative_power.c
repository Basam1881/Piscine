/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 10:01:02 by bnaji             #+#    #+#             */
/*   Updated: 2021/06/01 10:01:36 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
