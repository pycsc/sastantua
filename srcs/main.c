/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    main.c                                                +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2018/09/26 20:06:55 by lucas                  ##+              */
/*    Updated: 2018/09/26 20:06:55 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, USAGE, sizeof(USAGE) - 1);
		return (1);
	}
	pyramid(ato_ui(av[ac - 1]), 0);
	return (0);
}
