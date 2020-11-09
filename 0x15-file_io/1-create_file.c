#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{}
	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
		if (fd == -1)
			return (-1);
		write(fd, text_content, i);
		close(fd);
		return (1);
	}
	return (-1);
}
