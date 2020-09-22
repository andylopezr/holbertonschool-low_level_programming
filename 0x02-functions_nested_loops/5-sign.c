#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: character to test.
 * Return: 1 if greater than 0, 0 if zero, -1 if lesser than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (42);
		return (1);
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	_putchar (45);
	return (-1);

}
