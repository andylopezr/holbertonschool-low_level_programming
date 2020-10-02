#include "holberton.h"
/**
 * _strncpy - a function that copies a string
 * @dest: we copy to
 * @src: we copy from
 * @n: size of
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	char *start = dest;

	for (; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (start);
}
