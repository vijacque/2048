#ifndef TRUC_H
# define TRUC_H

# define SSIZE 1
# include "libft.h"
# include <ncurses.h>
# include <time.h>
# include <stdlib.h>
# include <unistd.h>

enum	e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_printnb
{
	int			x;
	int			y;
	int			xa;
	int			ya;
	int			i;
	int			j;

}				t_printnb;

void			ft_new_digit(int tab[4][4]);
int				ft_two_or_four(void);
int				ft_randomize(void);
int				move_up(int tab[4][4]);
int				move_down(int tab[4][4]);
int				move_left(int tab[4][4]);
int				move_right(int tab[4][4]);
int				merge_left(int tab[4][4]);
int				merge_right(int tab[4][4]);
int				merge_up(int tab[4][4]);
int				merge_down(int tab[4][4]);
int				ft_aff_square(int tab[4][4]);
void			ft_back_to_normal(int tab[4][4]);
void			ft_newgame(int tab[4][4]);
int				can_move(int tab[4][4]);
int				ft_up(int tab[4][4]);
int				ft_down(int tab[4][4]);
int				ft_left(int tab[4][4]);
int				ft_right(int tab[4][4]);
void			ft_while_main(int tab[4][4]);
int				ft_colors(int nbr);
void			ft_attrof(void);

#endif
