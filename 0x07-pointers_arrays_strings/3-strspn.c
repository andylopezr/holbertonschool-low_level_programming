#include "holberton.h"

/**
 * *_strspn - Function that locates a character in a string.
 * @s: Long string.
 * @accept: Short string.
 *
 * Return: Number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int consist = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0 ; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				consist++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (consist);
}
