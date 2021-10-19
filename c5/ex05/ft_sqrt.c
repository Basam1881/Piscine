/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 10:04:24 by bnaji             #+#    #+#             */
/*   Updated: 2021/06/01 10:07:07 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) < nb && i <= 46340)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}
