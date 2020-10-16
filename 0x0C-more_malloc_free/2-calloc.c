#include "holberton.h"
/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: elements.
 *@size: size of type.
 *Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *point;

	if (!nmemb || !size)
		return (NULL);
	point = malloc(nmemb * size);
	if (!point)
		return (NULL);
	for (i = 0; i < (nmemb * size) ; i++)
		point[i] = 0;
	return ((void *)point);
}
