/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dwestpha <“dwestpha@student.codam...>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 16:49:50 by dwestpha      #+#    #+#                 */
/*   Updated: 2018/10/07 16:49:51 by dwestpha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	check_line(char **argv, char nb, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (argv[x][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	check_column(char **argv, char nb, int y)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		if (argv[i][y] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	check_block(char **argv, int x, int y, char nb)
{
	int i;
	int j;

	i = -1;
	if (x <= 3)
		x = 1;
	else if (x <= 6)
		x = 4;
	else if (x <= 9)
		x = 7;
	y = y - (y % 3);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (argv[x][y] == nb)
				return (0);
			y++;
		}
		y = y - 3;
		x++;
	}
	return (1);
}

int	check_grille(char **argv, int n)
{
	int i;
	int j;

	i = 0;
	if (n == 10)
	{
		while (++i <= 9)
		{
			j = 0;
			while (argv[i][j])
			{
				if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != 46)
					return (0);
				j++;
			}
			if (j != 9)
				return (0);
		}
		return (1);
	}
	else
		return (0);
}
