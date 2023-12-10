/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:59:37 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/10 17:30:17 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char) c)
            return (char *) s;
        s++;
    }
    if (*s == (char) c)
        return (char *) s;
    return (NULL);
}

size_t ft_strspn(const char *s, const char *accept)
{
    size_t count;

    count = 0;
    while (*s && ft_strchr(accept, *s))
    {
        count++;
        s++;
    }
    return (count);
}

/*
#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept);

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Helko Helko Helko Helko";
    size_t len = ft_strspn(str1, str2);
    printf("Length of initial segment in '%s' containing only characters from '%s': %zu\n", str1, str2, len);
    return 0;
}
*/

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);