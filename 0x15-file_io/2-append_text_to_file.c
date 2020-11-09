#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, f;

	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{}
	if (!filename)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		f = write(fd, text_content, i);
		if (f == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
}
