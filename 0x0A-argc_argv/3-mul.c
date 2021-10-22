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


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = *argv[1] - 48;
		j = *argv[2] - 48;

		printf("%d\n", (i * j));
	}

	return (0);
}
