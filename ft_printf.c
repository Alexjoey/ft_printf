/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:08 by amylle            #+#    #+#             */
/*   Updated: 2024/02/28 14:14:13 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printcount;
	int		i;

	va_start (args, str);
	i = -1;
	printcount = 0;
	while (str && str[++i])
	{
		if (str[i] == '%' && str[i + 1] && ft_isformat(str[i + 1]))
			printcount += ft_formats(str[++i], args);
		else
			printcount += ft_format_char(str[i]);
	}
	va_end (args);
	return (printcount);
}
