/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   affichage.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dwestpha <“dwestpha@student.codam...>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 16:49:32 by dwestpha      #+#    #+#                 */
/*   Updated: 2018/10/07 16:49:33 by dwestpha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	affichage(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
