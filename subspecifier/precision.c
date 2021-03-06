/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuchs <pfuchs@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:45:08 by pfuchs            #+#    #+#             */
/*   Updated: 2022/03/29 09:43:05 by pfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "subspecifier.h"

#include <stdarg.h>

#include "libft.h"

int	process_precision(const char *format, va_list args, t_subspecifiers *data)
{
	int	i;

	if (*format != '.')
		return (0);
	format++;
	if (*format == '*')
	{
		data->precision = va_arg(args, int);
		return(2);
	}
	data->precision = ft_atoi(format);
	i = 0;
	while (ft_isdigit(format[i]))
		i++;
	return (i + 1);
}
