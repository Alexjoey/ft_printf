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

int	ft_format_unsigned_decimal(unsigned int i)
{
	char	*str;
	int		strlen;

	str = ft_itoa_base(i, "0123456789");
	strlen = ft_format_str(str);
	free (str);
	return (strlen);
}
