/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:08 by amylle            #+#    #+#             */
/*   Updated: 2023/12/11 18:36:14 by amylle           ###   ########.fr       */
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
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (ft_isformat(str[i]))
				printcount += ft_formats(str[i], args);
			else
				printcount += ft_format_char('%');
		}
		else
		{
			printcount++;
			ft_putchar_fd(str[i], 1);
		}
	}
	va_end (args);
	return (printcount);
}
