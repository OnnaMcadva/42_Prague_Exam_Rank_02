/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:34:17 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/11 12:54:49 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 0;

    while (i < 8)
    {
        result = (result << 1) | ((octet >> i) & 1);
        i++;
    }

    return result;
}

/*
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet);

int main()
{
    unsigned char byte = 0x89;

    printf("Original byte: ");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (byte >> i) & 1);
    }

    unsigned char reversed_byte = reverse_bits(byte);

    printf("\nReversed byte: ");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (reversed_byte >> i) & 1);
    }

    printf("\n");

    return 0;
}
*/
/*
int main() {
    unsigned char original = 170;  // Пример значения (10101010 в двоичной системе)
    unsigned char reversed = reverse_bits(original);

    printf("Original: %d\n", original);
    printf("Reversed: %d\n", reversed);

    return 0;
}
*/
// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100
