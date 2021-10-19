/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:48:00 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 16:29:21 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		if (*src == '\0')
			dest[count] = '\0';
		else
			dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
