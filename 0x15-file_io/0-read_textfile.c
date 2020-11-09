#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, let;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	if (!filename)
	{
		return (0);
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		let = read(fd, buffer, letters);
		close(fd);
		write(STDOUT_FILENO, buffer, let);
		if (let == -1)
			return (0);
		return (let);
	}
}
