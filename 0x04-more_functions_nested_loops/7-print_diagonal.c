#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: number
 * espacio: count
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int lineas, espacio;

	if (n > 0)
	{
		for (lineas = 0 ; lineas < n ; lineas++)
		{
			for (espacio = 0 ; espacio < lineas ; espacio++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}

	else
	{
		_putchar(10);
	}

}
