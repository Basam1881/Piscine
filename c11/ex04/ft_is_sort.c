/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:52:44 by bnaji             #+#    #+#             */
/*   Updated: 2021/06/09 10:52:48 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int num;

	i = 0;
	while (length-- > 1)
	{
		num = f(tab[length], tab[length - 1]);
		if (num == 0)
			continue;
		if (i == 0)
			i = num;
		else if ((i < 0 && num > 0) || (i > 0 && num < 0))
			return (0);
	}
	return (1);
}
