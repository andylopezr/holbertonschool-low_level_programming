#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int length, last_position, i;
	char temporal[] = " ";

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
