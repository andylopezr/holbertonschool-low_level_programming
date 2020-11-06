#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: index to find
 * @n: decimal number
 * Return: the value of the bit at index or -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (1 & (n >> index));
}
