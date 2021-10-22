#include "main.h"

/**
 * main - print the name of the program
 *
 *
 * @argc: Count arguments in command line
 * @argv: Array with the address value of the arguments
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)

	printf("%s\n", argv[0]);

	return (0);
}
