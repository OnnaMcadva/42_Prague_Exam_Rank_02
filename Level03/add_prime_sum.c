/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:47 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/11 14:13:51 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int n) 
{
	int i = 3;

    if (n <= 1) 
		  return (0);
    if (n == 2) 
		  return (1);
    if (n % 2 == 0) 
		  return (0);
    while (i * i <= n)
	{
        if (n % i == 0) 
			  return (0);
		i += 2;
	}
    return (1);
}

int add_prime_sum(int n) 
{
    int sum = 0;
	int i = 2;

    while (i <= n) 
	{
        if (ft_is_prime(i)) 
			sum += i;
		i++;
    }
    return (sum);
}

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

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int main(int argc, char *argv[]) 
{
    if (argc == 2)
        ft_putnbr_v(add_prime_sum(ft_atoi(argv[1])));
    write(1, "\n", 1);
    return (0);
}


// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------

// Write a program that takes a positive integer
// as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument
// is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

