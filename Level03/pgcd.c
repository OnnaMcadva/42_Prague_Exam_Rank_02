/* эта задача была у меня на экзамене. но там я решила ее другим способом */
#include <stdio.h>
#include <stdlib.h>

int    ft_pgcd(int a, int b)
{
    int denom = a;
    while (denom >= 1)
    {
        if ((a % denom == 0) && (b % denom == 0))
        {
            return(denom);
        }
        denom--;
    }
    return(1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}

// Assignment name  : pgcd
// Expected files   : pgcd.c
// Allowed functions: printf, atoi, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes two strings representing two strictly positive
// integers that fit in an int.

// Display their highest common denominator followed by a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.

// Examples:

// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e
// 1$
// $> ./pgcd | cat -e
// $