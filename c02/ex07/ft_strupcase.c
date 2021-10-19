/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:59:59 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 16:54:06 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
