/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:02:48 by bnaji             #+#    #+#             */
/*   Updated: 2021/06/04 21:09:09 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((buffer = malloc(range * sizeof(int))) == NULL)
		return (0);
	index = 0;
	while (index <= range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
