/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:59:59 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 16:51:01 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int count;

	count = 1;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
