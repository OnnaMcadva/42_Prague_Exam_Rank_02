/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:00:15 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/10 19:04:54 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char *str1, char *str2)
{
    int arr[128] = {0};
    int i = 0;
    int j = 0;

    while(str2[i])
    {
        arr[(int)str2[i]] = 1;
        i++;
    }
    while(str1[j])
    {
        if(arr[(int)str1[j]] == 1)
        {
            write(1, &str1[j], 1);
            arr[(int)str1[j]] = 0;
        }
        j++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $
