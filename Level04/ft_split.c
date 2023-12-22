/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 23:12:21 by annavm            #+#    #+#             */
/*   Updated: 2023/12/23 00:12:33 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

char	**ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **tab;

    tab = (char**)malloc(sizeof(**tab)*WD_NUM);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        if (str[i] > 32)
        {
            k = 0;
            tab[j] = (char*)malloc(sizeof(char)*WD_LEN);
            while (str[i] > 32)
            {
                tab[j][k] = str[i];
                k++;
                i++;
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

/*
#include <stdio.h>

int main() {
    char str[] = "что за херня xnj pf [thyz]   -ft_split";
    char **result = ft_split(str);

    // Вывод содержимого массива result
    int i = 0;
    while (result[i] != 0) {
        printf("Word %d: %s\n", i + 1, result[i]);
        i++;
    }

    // Освобождение выделенной памяти
    i = 0;
    while (result[i] != 0) {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
*/

// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);
