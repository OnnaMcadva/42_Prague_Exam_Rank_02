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

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
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
