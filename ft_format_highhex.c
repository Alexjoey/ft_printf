/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_highhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:50:31 by amylle            #+#    #+#             */
/*   Updated: 2023/11/04 15:20:55 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_highhex(unsigned int i)
{
	char	*str;
	int		strlen;

	str = ft_itoa_base(i, "0123456789ABCDEF");
	strlen = ft_format_str(str);
	free (str);
	return (strlen);
}
