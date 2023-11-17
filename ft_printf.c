/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:08 by amylle            #+#    #+#             */
/*   Updated: 2023/11/03 15:33:48 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	char	*strdup;

	va_start (args, str);
	strdup = ft_strdup(str);
	i = ft_strparser(strdup, args);
	va_end (args);
	free (strdup);
	return (i);
}
