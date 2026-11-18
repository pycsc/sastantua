/* ************************************************************************** */
/*                                                                            */
/*                                                           +#               */
/*    test_ato_ui.c                                         +##               */
/*                                                        +###+               */
/*    By: lucas <lucas@tsiaraso.com>                  +########+              */
/*                                                          +###+             */
/*    Created: 2026/11/18 05:48:00 by lucas                  ##+              */
/*    Updated: 2026/11/18 05:48:00 by lucas                 #+                */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "sastantua.h"

int	main(void)
{
	assert(ato_ui("") == 0);
	assert(ato_ui("0") == 0);
	assert(ato_ui("  +42") == 42);
	assert(ato_ui("123abc") == 123);
	return (0);
}
