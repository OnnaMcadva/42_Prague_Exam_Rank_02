/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:19:14 by anmakaro          #+#    #+#             */
/*   Updated: 2023/12/07 16:20:47 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count = 0;

	while (str[count])
		count++;
	return (count);
}
// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// ------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);
