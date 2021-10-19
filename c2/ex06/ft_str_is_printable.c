/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:59:59 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 16:52:43 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
		}
		else
		{
			count = 0;
		}
		str++;
	}
	return (count);
}
