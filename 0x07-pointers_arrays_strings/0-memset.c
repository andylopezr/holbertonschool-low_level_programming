#include "holberton.h"
/**
 * _memset - fills n bytes of the memory with constant.
 *@s: array.
 *@b: constant.
 *@n: amount of spaces.
 *Return: a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (n--)
	{
		*s = b;
		i++;
	}
	return (s);

}
