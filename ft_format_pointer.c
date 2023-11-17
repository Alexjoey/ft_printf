/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:45:09 by amylle            #+#    #+#             */
/*   Updated: 2023/11/04 15:28:02 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_pointer(void *yom)
{
	int				len;
	char			*str;

	if (yom == NULL)
	{
		len = ft_format_str("(nil)");
		return (len);
	}	
	len = ft_format_str("0x");
	str = ft_itoa_base((unsigned long)yom, "0123456789abcdef");
	len += ft_format_str(str);
	free (str);
	return (len);
}
