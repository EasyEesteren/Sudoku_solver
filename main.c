/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dwestpha <“dwestpha@student.codam...>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 16:53:38 by dwestpha      #+#    #+#                 */
/*   Updated: 2018/10/07 16:53:40 by dwestpha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int		main(int argc, char **argv)
{
	if (check_grille(argv, argc))
		if (solver(argv, 9))
			affichage(argv);
		else
			ft_putstr("Error\n");
	else
		ft_putstr("Error\n");
	return (0);
}
