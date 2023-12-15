/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:13:11 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/10 19:13:17 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	
	unsigned int result;
	unsigned int i = 0;
	
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.