#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @x: string to change
 * Return: char
 */
char *rot13(char *x)
{
	int y = 0;
	char *rot13 = x;
	char *value1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *value2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*rot13)
	{
		for (y = 0; value1[y]; y++)
		{
			if (*rot13 == value1[y])
			{
				*rot13 = value2[y];
				break;
			}
		}
		rot13++;
	}
	return (x);
}
