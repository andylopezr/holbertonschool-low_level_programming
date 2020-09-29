#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: is the string to reverse
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int length, last_position, i;
	char temporal[] = 32;

	while (s[length] != '\0')
	{
		length++;
	}

	last_position = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		*temporal = s[i];
		s[i] = s[last_position - i];
		s[last_position - i] = *temporal;
	}
}
