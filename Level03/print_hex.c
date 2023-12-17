#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_atoi_v(char *str)
{
	int n = 0;
    int i = 0;

	while (str[i])
	{
		n = n * 10 + str[i] - '0';
        i++;
	}
	return (n);
}

void	ft_print_hex(int n)
{
	char hex_digs[] = "0123456789abcdef";

	if (n >= 16)
    {
		ft_print_hex(n / 16);
	    ft_putchar(hex_digs[n % 16]);
    }
    else
        ft_putchar(hex_digs[n]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi_v(argv[1]));
	ft_putchar('\n');
	return (0);
}

// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $