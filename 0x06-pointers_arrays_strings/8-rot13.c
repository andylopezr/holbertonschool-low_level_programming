#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @x: string to change
 * Return: char
 */
char *rot13(char *x)
{
	int y = 0;
	char *value1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *value2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*x)
	{
		for (y = 0; value1[y]; y++)
		{
			if (*x == value1[y])
			{
				*x = value2[y];
				break;
			}
		}
		x++;
	}
	return (x);
}
