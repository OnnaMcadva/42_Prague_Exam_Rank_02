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

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	rev_char = 0;

	while (i)
	{
		rev_char = rev_char * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (rev_char);
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