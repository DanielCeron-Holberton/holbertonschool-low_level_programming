#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: count the arguments passed
 * @argv: Array of the address values
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", (argc - 1));
	for (; argv[i]; i++)
	{
		i++;
	}


	return (0);
}
