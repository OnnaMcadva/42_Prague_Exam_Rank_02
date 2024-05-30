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

/*
void	test_simple(void)
{
	int	x;
	int	y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: simple string -----------\n\n");
	printf("Testing: (\"\\tHello!\\n\")\n");
	x += printf("  Or\t:\tHello!\n");
	y += ft_printf("  Ft\t:\tHello!\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_s(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%s -----------\n\n");
	printf("Testing: (\"\\t%%s\\n\", \"coucou, ca va?\")\n");
	x += printf("  Or\t:\t%s\n", "coucou, ca va?");
	y += ft_printf("  Ft\t:\t%s\n", "coucou, ca va?");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe string \\\"%%s\\\" is visible.\\n\", \"TRALALA\")\n");
	x += printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	y += ft_printf("  Ft\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	char *s = NULL;
	if (s == NULL)
		write(1, "(null)\n", 7);
	printf("Testing: (\"\\tNULL %%s NULL.\\n\", NULL)\n");
	x += printf("  Or\t:\tNULL %s NULL.\n", s);
	y += ft_printf("  Ft\t:\tNULL %s NULL.\n", s);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_d(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%d -----------\n\n");
	printf("Testing: (\"\\t%%d\\n\", 42)\n");
	x += printf("  Or\t:\t%d\n", 42);
	y += ft_printf("  Ft\t:\t%d\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%d is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe number %d is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe number %d is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%d\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%d\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%d\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%d\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MIN - INT_MIN)\n");
	x += printf("  Or\t:\t%d\n", INT_MIN - INT_MIN);
	y += ft_printf("  Ft\t:\t%d\n", INT_MIN - INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_x(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%x -----------\n\n");
	printf("Testing: (\"\\t%%x\\n\", 42)\n");
	x += printf("  Or\t:\t%x\n", 42);
	y += ft_printf("  Ft\t:\t%x\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%x is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe hex number %x is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe hex number %x is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%x\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%x\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%x\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", -42)\n");
	x += printf("  Or\t:\t%x\n", -42);
	y += ft_printf("  Ft\t:\t%x\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%x\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

int	main(void)
{
	printf("\n\n========== TESTS ========\n\n");
	test_simple();
	test_s();
	test_d();
	test_x();


	return (0);
}
*/
