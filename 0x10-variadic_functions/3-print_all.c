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
	char *sval;
	char cval;
	float fval;
	int ival;
	int i = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			cval = va_arg(ap, int);
			printf("%c", cval);
			break;
		case 'f':
			fval = va_arg(ap, double);
			printf("%f", fval);
			break;
		case 'i':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 's':
			sval = va_arg(ap, char *);
			if (!sval)
				printf("(nil)");
			printf("%s", sval);
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
