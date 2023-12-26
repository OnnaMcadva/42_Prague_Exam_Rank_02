
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
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
            while (str[i] > ' ')
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

void    rev_wstr(char *str)
{
    char **cur;
    int i = 0;

    cur = ft_split(str);
    while (cur[i])
        i++;
    i -= 1;
    while (i >= 0)
    {
        ft_putstr(cur[i]);
        if (i > 0)
            write(1, " ", 1);
        i--;
    }
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
    if (argc == 2)
        rev_wstr(argv[1]);
    write (1, "\n", 1);
    return (0);
}


// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>
