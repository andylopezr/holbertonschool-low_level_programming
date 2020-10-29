#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: table to print
 */
void print_times_table(int n)
{
	int i, j, mul, div, mod, dim;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				div = mul / 100;
				mod = mul % 10;
				dim = (mul / 10) % 10;
				if (div != 0)
				{
					_putchar(div + '0');
				}
				if (div != 0 || dim != 0)
				{
					_putchar(dim + '0');
				}
				_putchar(mod + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 100)
						_putchar(' ');
					if (i * (j + 1) < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
