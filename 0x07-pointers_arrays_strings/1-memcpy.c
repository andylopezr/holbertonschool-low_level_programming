# include "holberton.h"

/**
 * _memcpy - funtion thar copies memory area.
 * @dest: string destin
 * @src: string src
 * @n: number
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
