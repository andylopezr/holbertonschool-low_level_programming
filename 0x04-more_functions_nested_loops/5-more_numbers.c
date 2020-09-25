#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers,
 *from 0 to 14, followed by a new line..
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, a, b;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a * 10;
			if (a >= 10)
			{
				b = a;
			}
			_putchar((b / 10) + '0');
			if (a >= 10)
			{
				_putchar((a % 10) + '0');
			}
		}
		_putchar(10);
	}
}
