/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:57:44 by amylle            #+#    #+#             */
/*   Updated: 2023/11/17 16:33:56 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("printf: NULL %z%Z%Z%z%s%s\n", NULL);
	ft_printf("ft_printf: NULL %z%Z%Z%z%c%s%s\n", NULL);
}
