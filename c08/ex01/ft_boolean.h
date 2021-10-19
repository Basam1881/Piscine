/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:09:36 by mal-guna          #+#    #+#             */
/*   Updated: 2021/06/05 01:58:58 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum {
	false = 0,
	true = 1
}	t_bool;

# define TRUE true
# define FALSE false
# define SUCCESS 0

# define EVEN(num) (num % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
