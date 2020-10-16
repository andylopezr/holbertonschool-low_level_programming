#include "holberton.h"
/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *Return: pointer to array, NULL otherwise.
 */
int *array_range(int min, int max)
{
	int i, size;
	int *point;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	point = malloc(sizeof(int) * (size));
	if (!point)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		point[i] = min;
		min++;
	}
	return (point);
}
