#include "holberton.h"

/**
 * print_square - Entry point
 * @size: number
 * filas: count
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int filas, columnas;

	if (size <= 0)
		_putchar(10);

	for (filas = 0 ; filas < size ; filas++)
	{
		for (columnas = 0 ; columnas < size ; columnas++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
