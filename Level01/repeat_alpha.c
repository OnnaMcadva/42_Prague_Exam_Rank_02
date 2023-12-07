#include <unistd.h>

void    ft_putchar_v(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        write(1, &c, 1);
        i++;
    }
}

void    repeat_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ('a' <= str[i] && str[i] <= 'z')
            ft_putchar_v(str[i], str[i] + 1 - 'a');
        else if ('A' <= str[i] && str[i] <= 'Z')
            ft_putchar_v(str[i], str[i] + 1 - 'A');
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}


// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>