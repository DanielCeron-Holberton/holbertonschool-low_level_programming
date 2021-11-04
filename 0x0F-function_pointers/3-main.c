#include "3-calc.h"

/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[3]);
	char *p = argv[2];
	int result;

	if ((*p != '+' && *p != '-' && *p != '*' && *p != '/' && *p != '%') || strlen(p) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(p)(i, j);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d \n", result);

	return (0);
}
