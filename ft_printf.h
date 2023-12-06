/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saharchi <saharchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:15:38 by saharchi          #+#    #+#             */
/*   Updated: 2023/12/06 12:30:23 by saharchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int     ft_printf(const char *format, ...);
void    ft_putchar(char c , int *i);
void	ft_putnbr(long n, int *i, int base, char c);
void	ft_putstr(char *s, int *i);
void    ft_putnbr_address(unsigned long n,int *i);

#endif