#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : string received.
 */

void print_rev(char *s)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (d = (c - 1); d >= 0; d--)
	{
		_putchar(s[d]);
	}

	_putchar(10);

}
