#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 */

void print_line(int n)
{
	int contador;
	if (n > 0)
	{
		for (contador = 0; contador <= n; contador++)
		{
		_putchar('_');
		}
	}
	_putchar(10);
}
