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
	int result = 0;
	int compare = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{

		for (i = 1; argv[i]; i++)
		{

			compare = atoi(argv[i]);

			if (compare > 0)
			{
				result += atoi(argv[i]);
			}
			else if (compare < 0)
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
