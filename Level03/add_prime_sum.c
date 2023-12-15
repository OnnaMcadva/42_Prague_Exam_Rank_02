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

int	ft_atoi(char *s)
{
	int	res = 0;

	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
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


// Функция ft_atoi преобразует строку в целое число. 
// В цикле while происходит перебор символов строки s. 
// Внутри цикла while переменная res умножается на 10, 
// а затем к ней прибавляется значение текущего символа строки s, 
// преобразованное в целое число. После этого указатель на строку s увеличивается на 1. 
// Функция возвращает полученное целое число.

// Функция is_prime проверяет, является ли число num простым. Если num меньше или равно 1, 
// то функция возвращает 0. В цикле while переменная i увеличивается на 1 до тех пор, 
// пока i не станет больше квадратного корня из num. Если num делится на i без остатка, 
// то функция возвращает 0. Если цикл завершается без нахождения делителя num, то функция возвращает 1.

// Функция put_nbr выводит целое число n на экран. Если n больше или равно 10, 
// то функция вызывает саму себя с аргументом n / 10. Затем функция выводит на экран символ, 
// соответствующий последней цифре числа n.

// В функции main программа сначала проверяет, что количество аргументов командной строки равно 2. 
// Затем она преобразует второй аргумент командной строки в целое число nbr с помощью функции ft_atoi. 
// Далее программа вычисляет сумму всех простых чисел, меньших или равных nbr, 
// и сохраняет результат в переменную sum. Наконец, программа выводит значение sum на экран 
// с помощью функции put_nbr и добавляет символ новой строки.