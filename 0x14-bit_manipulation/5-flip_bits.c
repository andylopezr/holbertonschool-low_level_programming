#include "holberton.h"

/**
 * flip_bits - returns the number of bits fliped from one to another
 * @n: first num
 * @m: second num
 * Return: number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n = n ^ m;
	m = 0;
	while (n > 0)
	{
		m = m + (1 & n);
		n = n >> 1;
	}
	return (m);
}
