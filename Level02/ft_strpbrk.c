/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:58:58 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/10 16:09:59 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int	main(void)
{
	char str1[] = "Hella, world!";
	char str2[] = "haeiou";
	char *result;

	result = ft_strpbrk(str1, str2);
	if (result == NULL)
		printf("No matching characters found.\n");
	else
		printf("The first matching character is '%c' at position %ld.\n", *result, result - str1);

	return (0);
}

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

// Данная функция находит первое вхождение любого символа из строки s2 в строку s1.

// Функция начинается с проверки, что строки s1 и s2 не являются нулевыми указателями. 
// Если хотя бы одна из строк является нулевым указателем, то функция возвращает ноль. 
// Затем функция проходит по строке s1 и проверяет каждый символ на наличие в строке s2. 
// Если символ найден в строке s2, то функция возвращает указатель на этот символ в строке s1. 
// Если символ не найден, то функция продолжает поиск. 
// Если в строке s1 не найдено ни одного символа из строки s2, то функция возвращает ноль.

// Название функции ft_strpbrk может быть расшифровано как 
// “find the pointer to the first break character in a string”. 
