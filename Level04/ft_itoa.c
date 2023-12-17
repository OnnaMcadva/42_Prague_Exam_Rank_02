//#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static unsigned int	ft_number_size(int number)
{
	unsigned int	digits;

	digits = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		digits += 1;
	while (number != 0)
	{
		number /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int nbr)
{
	unsigned int	number;
	unsigned int	digits;
	char			*string;

	digits = ft_number_size(nbr);
	string = (char *)malloc(sizeof(char) * (digits + 1));
	if (string == NULL)
		return (NULL);
	if (nbr < 0)
	{
		string[0] = '-';
		number = -nbr;
	}
	else
		number = nbr;
	if (number == 0)
		string[0] = '0';
	string[digits] = '\0';
	while (number != 0)
	{
		string[digits - 1] = (number % 10) + '0';
		number /= 10;
		digits--;
	}
	return (string);
}

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);