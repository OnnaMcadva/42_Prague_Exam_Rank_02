#include <stddef.h>
//#include <stdio.h>
#include <stdlib.h>

int ft_digits(int nbr)
{
    int dig = 0;
    
    if (nbr == 0)
        return (1);
    if (nbr < 0)
        dig += 1;
    while (nbr != 0)
    {
        nbr /= 10;
        dig++;
    }
    return (dig);
}

char	*ft_itoa(int nbr)
{
    long int helpa;
    unsigned int digits = ft_digits(nbr);
    char *str;

    str = (char*)malloc(sizeof(char)*(digits + 1));
    if (!str)
        return (NULL);
    if (nbr < 0)
    {
        helpa = -nbr;
        str[0] = '-';
    }
    else if (nbr == 0)
        str[0] = '0';
    else
        helpa = nbr;
    str[digits] = '\0';
    while (helpa)
    {
        str[digits - 1] = helpa % 10 + '0';
        helpa /= 10;
        digits--;
    }
    return (str);    
}

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);
