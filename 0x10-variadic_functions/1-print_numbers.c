#include "variadic_functions.h"

/**
 * print_numbers - print all the nmbers
 *
 * @separator: separator
 * @n: size
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
		{
			printf("%d\n", va_arg(ap, int));
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		}
	va_end(ap);
}
