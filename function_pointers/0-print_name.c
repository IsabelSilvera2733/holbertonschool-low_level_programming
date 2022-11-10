#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Pointer to printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
