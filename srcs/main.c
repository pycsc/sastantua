/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    main.c                                                +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2018/09/26 20:06:55 by lucas                  ##+              */
/*    Updated: 2018/09/30 18:32:04 by lucas                 #+                */
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
	sastantua((int)ato_ui(av[ac - 1]));
	return (0);
}
