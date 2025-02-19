/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:16:30 by timatias          #+#    #+#             */
/*   Updated: 2024/07/10 16:00:50 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	inter(char *str, char c, int indice)
{
	int i = 0;

	while (str[i] && (i < indice || indice == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char *av[])
{
	int  i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if(!inter(av[1],av[1][i], i) && inter(av[2], av[1][i], -1))
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
