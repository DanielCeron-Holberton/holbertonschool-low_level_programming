#include "3-calc.h"

/**
 * main - entry point
 * @argc: arguments number
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	char *p = argv[2];
	int (*result)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ( strlen(p) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	result = get_op_func(p);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d \n", result(i, j));

	return (0);
}
