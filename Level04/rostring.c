

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

void    ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **tab;

    tab = (char **)malloc(sizeof(**tab)*WD_NUM);
    if (!tab)
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        if (str[i] > ' ')
        {
            tab[j] = (char *)malloc(sizeof(char)*WD_LEN);
            if (!tab)
                return (NULL);
            k = 0;
            while(str[i] > ' ')
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return (tab);
}

void    rostring(char *str)
{
    int i = 1;
    char **cur;
    cur = ft_split(str);

    while (cur[i])
    {
        ft_putstr(cur[i]);
        write (1, " ", 1);
        i++;
    }
    ft_putstr(cur[0]);
    i = 0;
    while (cur[i])
    {
        free(cur[i]);
        i++;
    }
    free(cur);
}

int main(int argc, char *argv[])
{
    if (argc > 1)
        rostring(argv[1]);
    write (1, "\n", 1);
    return (0);
}

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>
