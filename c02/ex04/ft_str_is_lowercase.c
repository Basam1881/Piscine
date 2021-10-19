/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:59:59 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 16:45:07 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
