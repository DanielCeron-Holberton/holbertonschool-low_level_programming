#include "function_pointers.h"
/**
 * print_name - print a name based on other functions
 *
 * @name: Name to print
 * @f: entry function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
	else
	{
		return;
	}
}
