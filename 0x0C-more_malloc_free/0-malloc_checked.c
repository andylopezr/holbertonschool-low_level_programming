#include "holberton.h"
/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory.
 *Return: pointer, or termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
