/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:37:53 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/11 13:39:12 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
   	return ((octet >> 4) | (octet << 4));
}

// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100