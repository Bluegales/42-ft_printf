/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuchs <pfuchs@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:24:01 by pfuchs            #+#    #+#             */
/*   Updated: 2022/03/22 22:00:50 by pfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // ft_strlen

#include <stddef.h> // NULL size_t

// strncpy but null terminates the dest and size includes the null
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_length;

	src_length = ft_strlen(src);
	if (n)
	{
		if (n > src_length + 1)
			n = src_length + 1;
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
	}
	return (src_length);
}
