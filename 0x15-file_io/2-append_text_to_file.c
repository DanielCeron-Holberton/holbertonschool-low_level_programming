#include "main.h"
/**
 * append_text_to_file - attaches the entry string at the end
 *
 * @filename: entry filename
 * @text_content: entry text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdi;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
