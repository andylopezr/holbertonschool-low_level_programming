#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @x: string to change
 * Return: char
 */
char *leet(char *x)
{
	int y = 0;
	char *end = x;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (*x)
	{
		for (y = 0; letters[y]; y++)
		{
			if (*x == letters[y])
			{
				*x = numbers[y];
			}
		}
		x++;
	}
	return (end);
}
