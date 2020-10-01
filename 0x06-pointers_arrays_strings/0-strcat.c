#include "holberton.h"
/**
 * *_strcat - a function to append 2 strings.
 * @dest: string appending to.
 * @src: the string we are appending from
 * Return: a pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
	return (begin);
}
