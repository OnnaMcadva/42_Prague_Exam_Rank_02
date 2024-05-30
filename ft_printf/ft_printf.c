/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:05:32 by anmakaro          #+#    #+#             */
/*   Updated: 2024/05/30 14:05:33 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int is_spec(char c)
{
    if ((c == 's') || (c == 'd') || (c == 'x'))
        return (1);
    else
        return (0);
}

void put_string(char *str, int *len)
{
    if (!str)
        str = "(null)";
    while (*str)
        *len += write(1, str++, 1);
}

void put_digit(long long int num, int base, int *len)
{
    char *hex = "0123456789abcdef";

    if (num < 0)
    {
        num *= -1;
        *len += write(1, "-", 1);
    }
    if (num >= base)
        put_digit((num / base), base, len);
    *len += write (1, &hex[num % base], 1);
}

int	ft_printf(const char *str, ...)
{
    int len = 0;

    va_list args;
    va_start(args, str);

    while (*str)
    {
        if ((*str == '%') && is_spec(*(str + 1)))
        {
            str++;
            if (*str == 's')
                put_string(va_arg(args, char *), &len);
            else if (*str == 'd')
                put_digit((long long int)va_arg(args, int), 10, &len);
            else if (*str == 'x')
                put_digit((long long int)va_arg(args, unsigned int), 16, &len);
        }
        else
            len += write (1, str, 1);
        str++;
    }
    return (va_end(args), len);
}
