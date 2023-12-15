/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:13:27 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/11 14:15:10 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] == ' ' || str[idx] == '\t')
		{
			if (str[idx + 1] > ' ' && str[idx + 1] != '\0')
				ft_putchar(' ');
		}
		else if (str[idx] != ' ' && str[idx] != '\t')
			ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays this string with exactly one
// space between words, with no spaces or tabs either at the beginning or the end,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// If the number of arguments is not 1, or if there are no words to display, the
// program displays \n.

// Example:

// $> ./epur_str "See? It's easy to print the same thing" | cat -e
// See? It's easy to print the same thing$
// $> ./epur_str " this        time it      will     be    more complex  . " | cat -e
// this time it will be more complex .$
// $> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

// Функция epur_str принимает строку str в качестве аргумента. 
// В первом цикле while происходит перебор символов строки str. 
// Внутри цикла while переменная idx увеличивается на 1 до тех пор, 
// пока не будет найден первый символ, отличный от пробела или табуляции. 
// Во втором цикле while происходит перебор символов строки str начиная с символа с индексом idx. 
// Если текущий символ строки str равен пробелу или табуляции, 
// то проверяется, следующий символ строки str больше пробела и не является концом строки. 
// Если это условие выполняется, то функция выводит на экран пробел. 
// Если текущий символ строки str не равен пробелу и не равен табуляции, 
// то функция выводит на экран этот символ. После этого переменная idx увеличивается на 1. 
// Цикл продолжается до тех пор, пока не будет достигнут конец строки.