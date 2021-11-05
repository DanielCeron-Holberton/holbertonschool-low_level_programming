#include "variadic_functions.h"
/**
 * print_strings - Prints parameters strings
 *
 * @separator: separator
 * @n: size
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *ptr_args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr_args = va_arg(ap, char *);
		if (ptr_args == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr_args);
		}
		if (i != n - 1 && separator != NULL)
		{

			printf("%s", separator);
		}
	}
	printf("\n");
}
