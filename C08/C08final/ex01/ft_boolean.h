/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:30:19 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/30 03:06:34 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG		"I have an even number of arguments.\n"

# define ODD_MSG		"I have an odd number of arguments.\n"

# define EVEN(x)		x % 2 == 0

# define SUCCESS		0

# define TRUE			1

# define FALSE			0

typedef int		t_bool;

#endif
