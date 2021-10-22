#include "main.h"
/**
 * main -  prints all arguments it receives.
 *
 * @argc: count the arguments passed
 * @argv: Array of the address values
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i = 1;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}
