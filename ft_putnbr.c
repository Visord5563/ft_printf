/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saharchi <saharchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:40:20 by saharchi          #+#    #+#             */
/*   Updated: 2023/12/06 13:08:18 by saharchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *i, int base, char c)
{
	char *x;

	if(c == 'x')
		x = "0123456789abcdef";
	if(c == 'X')
		x = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar('-', i);
		n = -n;
	}
	if(n >= base)
	{
		ft_putnbr(n / base, i, base, c);
		ft_putnbr(n % base, i, base, c);
	}
	else
		ft_putchar(x[n], i);
}