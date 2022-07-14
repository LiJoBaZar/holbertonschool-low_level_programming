#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Prints a name
 *@name: Name
 *@f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
