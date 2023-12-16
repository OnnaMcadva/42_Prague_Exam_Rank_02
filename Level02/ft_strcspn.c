/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:58:01 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/10 13:58:17 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i;
    int     j;

    i = 0;    
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
#include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str = "Hell    o, World!";
//     const char *reject = "   ,!";
    
//     size_t result1 = strcspn(str, reject);
//     size_t result2 = ft_strcspn(str, reject);   
//     printf("Length of initial segment 'reject': %zu\n", result1);
//     printf("Length of initial segment 'reject': %zu\n", result2);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str = "Hell    o, World!";
//     const char *reject = "   ,!";
    
//     size_t result1 = strcspn(str, reject);
//     size_t result2 = ft_strcspn(str, reject);   
//     printf("Length of initial segment 'reject': %zu\n", result1);
//     printf("Length of initial segment 'reject': %zu\n", result2);
//     return 0;
// }


// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

// Функция ft_strcspn принимает две строки в качестве аргументов и 
// возвращает количество символов в начальном сегменте строки s, 
// который не содержит ни одного символа из строки reject123.

// В первых двух строках функции объявляются переменные i и j. 
// Переменная i инициализируется значением 0. 
// Затем в цикле while происходит перебор символов строки s. 
// Внутри цикла while переменная j инициализируется значением 0. 
// Затем во вложенном цикле while происходит перебор символов строки reject. 
// Если текущий символ строки s равен текущему символу строки reject, 
// то функция возвращает количество символов в начальном сегменте строки s, 
// который не содержит ни одного символа из строки reject. 
// Если текущий символ строки s не равен текущему символу строки reject, 
// то переменная j увеличивается на 1. Цикл продолжается до тех пор, 
// пока не будет найден символ строки reject, либо не будут перебраны все символы строки reject. 
// Если символ строки reject не найден, то функция возвращает длину строки s.