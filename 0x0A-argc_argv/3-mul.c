#include "main.h"
/**
 * main -  prints multiples arguments it receives.
 *
 * @argc: count the arguments passed
 * @argv: Array of the address values
 * Return: Zero if two additional arguments passed else return 1
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = strtol(argv[1], NULL, 10);
		j = strtol(argv[2], NULL, 10);

		result = i * j;

		printf("%d\n", result);
	}

	return (0);
}
