#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
