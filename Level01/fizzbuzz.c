/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:24:33 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/07 15:16:18 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_v(int n)
{
	if (n >= 10)
	{
		ft_putnbr_v(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}
int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr_v(i);
		i++;
		write (1, "\n", 1);
	}
	return (0);
}

/*
Интересное решение вместо путнбр

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}
*/

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// ------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, 
// each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5,
// it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>
