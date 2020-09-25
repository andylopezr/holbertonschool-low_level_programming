#include "holberton.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: void.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			c++;
		}
		_putchar(c);

	}

	_putchar(10);

}
