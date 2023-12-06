/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saharchi <saharchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:15:07 by saharchi          #+#    #+#             */
/*   Updated: 2023/12/06 14:43:46 by saharchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void check(va_list args , char format, int *i)
{
    if (format == '%')
        ft_putchar('%', i);
    else if (format == 'c')
        ft_putchar(va_arg(args, int), i);
    else if (format == 's')
        ft_putstr(va_arg(args, char *), i);
    else if (format == 'd' || format == 'i')
        ft_putnbr(va_arg(args, int), i, 10, 'x');
    else if (format == 'u')
        ft_putnbr(va_arg(args, unsigned int), i, 10, 'x');
    else if (format == 'x' || format == 'X')
        ft_putnbr(va_arg(args, unsigned int), i, 16, format);
    else if (format == 'p')
    {
        ft_putstr("0x", i);
        ft_putnbr_address(va_arg(args, unsigned long), i);
    }
    else
        ft_putchar(format, i);
}
int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;
    int i;

    va_start(args, format);
    count = 0;
    i = 0;
    if(write(1,"",0)== -1)
        return -1;
    while(format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            check(args, format[i], &count);
        }
        else
            ft_putchar(format[i], &count);
        i++;
    }
    return(count);
}