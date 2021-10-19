/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:18:39 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/24 15:03:05 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int a[size];
	int s;

	s = size;
	count = 0;
	while (count < size)
	{
		a[size - 1] = tab[count];
		count++;
		size--;
	}
	count = 0;
	while (count < s)
	{
		tab[count] = a[count];
		count++;
		s--;
	}
}
