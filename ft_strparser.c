/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strparser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:57:57 by amylle            #+#    #+#             */
/*   Updated: 2023/11/04 15:38:17 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strparser(char *str, va_list args)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ret++;
			ft_putchar_fd(str[i], 1);
		}
		else if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (ft_isformat(str[i]))
				ret += ft_formats(str[i], args);
			else
				ret += ft_format_str("%");
		}
		i++;
	}
	return (ret);
}
