#include "variadic_functions.h"

/**
 * print_all - Prints all type of data
 *
 * @format: format to print
 *
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char *val;
	int i = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 's':
			val = va_arg(ap, char *);
			if (!val)
				printf("(nil)");
			else
				printf("%s", val);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
