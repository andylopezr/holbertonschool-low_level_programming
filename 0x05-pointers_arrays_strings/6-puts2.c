#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str : string to change.
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c+=2)
	{
		_putchar(str[c]);
	}
	_putchar(10);

}
