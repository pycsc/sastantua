/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    sastantua.h                                           +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2018/09/26 20:06:55 by lucas                  ##+              */
/*    Updated: 2018/09/26 20:06:55 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#ifndef SASTANTUA_H
# define SASTANTUA_H

# include <unistd.h>

# define USAGE "./sastantua size\n"

unsigned int		i_floor(unsigned int n);
unsigned int		y_floor(unsigned int n);
unsigned int		x_start(unsigned int y_floor, unsigned int i_floor);
unsigned int		x_line(unsigned int x_start, unsigned int y);
void				putchr(int c);
unsigned int		ato_ui(const char *a);
void				pyramid(unsigned int size, unsigned int n);
void				spaces(unsigned int last_line, unsigned int x_line)
void				door(unsigned int y, unsigned int *x);

#endif
