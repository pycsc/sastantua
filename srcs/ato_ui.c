/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    ato_ui.c                                              +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/04/02 00:34:09 by lucas                  ##+              */
/*    Updated: 2026/04/02 00:34:10 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"

unsigned int	ato_ui(const char *a)
{
	unsigned int	ui;

	ui = 0;
	if (!(*a))
		return (ui);
	while (*a == '+' || (*a >= 9 && *a <= 13) || *a == 32)
		a++;
	while (*a >= '0' && *a <= '9')
		ui = ui * 10 + *(a++) - '0';
	return (ui);
}
