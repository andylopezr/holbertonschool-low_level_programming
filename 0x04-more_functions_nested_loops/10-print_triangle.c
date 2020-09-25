#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int lines;
	int spaces;
	int border;
	int hash;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		border = size - 1;

		for (lines = 1; lines <= size; lines++)
		{
			for (spaces = 1; spaces <= border; spaces++)
			{
				_putchar(32);
			}
			for (hash = 1; hash <= lines; hash++)
			{
				_putchar(35);
			}
			border--;
			_putchar(10);
		}
	}
}
