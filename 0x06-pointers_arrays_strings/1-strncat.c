#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: size of src
 * Return: concatenated string
 **/
char *_strncat(char *dest, char *src, int n)
{
	int destsize = 0;
		int x = 0;

	while (dest[destsize] != '\0')
	{
		destsize++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[destsize] = src[x];
		destsize++;
		x++;
	}
	return (dest);
}
