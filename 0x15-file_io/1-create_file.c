#include "main.h"
/**
 * create_file - Create a file
 *
 * @filename: name of the file to create
 * @text_content: entry string to copy on the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdi;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		fdi = write(fd, text_content, strlen(text_content));
		if (fdi == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
