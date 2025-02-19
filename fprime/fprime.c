/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:16:30 by timatias          #+#    #+#             */
/*   Updated: 2024/07/10 17:04:03 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int i = 0, numero = 0;

	if (ac == 2)
	{
		i = 1;
		numero = atoi(av[1]);
		if (numero == 1)
			printf ("1");
		while (numero >= i++)
		{
			if (numero % i == 0)
			{
				printf ("%d", i);
				if (numero == i)
					break;
				printf("*");
				numero /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}
