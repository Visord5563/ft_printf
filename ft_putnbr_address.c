/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saharchi <saharchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:27:59 by saharchi          #+#    #+#             */
/*   Updated: 2023/12/06 12:39:03 by saharchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_address(unsigned long n, int *i)
{
	char *x;

	x = "0123456789abcdef";
	if(n >= 16)
	{
		ft_putnbr_address(n / 16, i);
		ft_putnbr_address(n % 16, i);
	}
	else if (n < 16)
		ft_putchar(x[n], i);
}