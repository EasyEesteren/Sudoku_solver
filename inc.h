#ifndef __INC_H
# define __INC_H
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		affichage(char **argv);
int			check_line(char **argv, char c, int x);
int			check_column(char **argv, char c, int y);
int			check_block(char **argv, int x, int y, char c);
int			check_grille(char **argv, int n);
int			solver(char **argv, int position);
#endif