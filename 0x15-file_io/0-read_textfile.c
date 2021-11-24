#include "main.h"
/**
 * read_textfile - read one text file passed as parameter 
 *
 * @filename: entry file text name 
 * @letters: # of chars
 * Return: ssize_t 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdi, fdj;
	char *buffer;

	/*VALIDATION OF ENTRY FILE*/
	if (filename == NULL)
		return (0);
	/*FILE DESCRIPTOR*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*BUFFER ALLOCATION*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fdi = read(fd, buffer, letters);
	if (fdi == -1)
	{
		free(buffer);
		return (0);
	}

	fdj = write(STDOUT_FILENO, buffer, fdi);
	if (fdj == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fdi);
}
