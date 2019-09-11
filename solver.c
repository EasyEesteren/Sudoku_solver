/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dwestpha <“dwestpha@student.codam...>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 16:50:39 by dwestpha      #+#    #+#                 */
/*   Updated: 2018/10/07 16:50:41 by dwestpha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int	solver(char **argv, int position)
{
	int		x;
	int		y;
	char	c;

	c = '0';
	x = position / 9;
	y = position % 9;
	if (position == 90)
		return (1);
	if (argv[x][y] != '.')
		return (solver(argv, position + 1));
	while (++c <= '9')
		if (check_line(argv, c, x))
			if (check_column(argv, c, y))
				if (check_block(argv, x, y, c))
				{
					argv[x][y] = c;
					if (solver(argv, position + 1))
						return (1);
				}
	argv[x][y] = '.';
	return (0);
}
