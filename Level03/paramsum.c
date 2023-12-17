
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

int main(int argc, char *argv[])
{
    (void)argv;
	ft_putnbr_v(argc - 1);
	ft_putchar('\n');
	return (0);
}

// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>