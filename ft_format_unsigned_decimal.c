/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:09:30 by amylle            #+#    #+#             */
/*   Updated: 2023/11/04 13:41:21 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_format_unsigned_decimal(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_itoa_base(n, "0123456789");
	if (!str)
		return (NULL);
	len = ft_format_str(str);
	free (str);
	return (len);
}
