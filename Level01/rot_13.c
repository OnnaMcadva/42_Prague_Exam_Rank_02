/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:56:04 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/08 21:03:32 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i] && str[i] <= 'M')
			|| ('a' <= str[i] && str[i] <= 'm'))
			str[i] += 13;
		else if (('N' <= str[i] && str[i] <= 'Z')
			|| ('n' <= str[i] && str[i] <= 'z'))
			str[i] -= 13;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// ------------------------------------------------

// Write a program that takes a string and
// displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program 
// displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>